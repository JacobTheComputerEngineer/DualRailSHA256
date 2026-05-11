#include "shaStandards.cpp"

std::vector<uint8_t> standardSHA256(const std::string& input)
{
    // Initial hash values
    uint32_t H[8] = {
        0x6a09e667, 0xbb67ae85, 0x3c6ef372, 0xa54ff53a,
        0x510e527f, 0x9b05688c, 0x1f83d9ab, 0x5be0cd19
    };

    // Convert string to bytes
    std::vector<uint8_t> data(input.begin(), input.end());

    // Pad input
    std::vector<uint8_t> padded = padInput(data);

    // Process each 512-bit chunks
    for (size_t i = 0; i < padded.size(); i += 64)
    {
        uint32_t W[64] = {0};

        // First 16 words
        for (int t = 0; t < 16; ++t)
        {
            W[t] =
                (padded[i + t * 4] << 24) |
                (padded[i + t * 4 + 1] << 16) |
                (padded[i + t * 4 + 2] << 8) |
                (padded[i + t * 4 + 3]);
        }

        // Remaining words
        for (int t = 16; t < 64; ++t)
        {
            uint32_t s0 = rR(W[t - 15], 7) ^ rR(W[t - 15], 18) ^ rS(W[t - 15], 3);
            uint32_t s1 = rR(W[t - 2], 17) ^ rR(W[t - 2], 19) ^ rS(W[t - 2], 10);
            W[t] = W[t - 16] + s0 + W[t - 7] + s1;
        }

        uint32_t a = H[0];
        uint32_t b = H[1];
        uint32_t c = H[2];
        uint32_t d = H[3];
        uint32_t e = H[4];
        uint32_t f = H[5];
        uint32_t g = H[6];
        uint32_t h = H[7];

        // Main compression loop
        for (int t = 0; t < 64; ++t)
        {
            uint32_t S1 = rR(e, 6) ^ rR(e, 11) ^ rR(e, 25);
            uint32_t ch = (e & f) ^ ((~e) & g);
            uint32_t temp1 = h + S1 + ch + k[t] + W[t];
            
            uint32_t S0 = rR(a, 2) ^ rR(a, 13) ^ rR(a, 22);
            uint32_t maj = (a & b) ^ (a & c) ^ (b & c);
            uint32_t temp2 = S0 + maj;

            h = g;
            g = f;
            f = e;
            e = d + temp1;
            d = c;
            c = b;
            b = a;
            a = temp1 + temp2;

            
        }

        // Add compressed chunk to current hash
        H[0] += a;
        H[1] += b;
        H[2] += c;
        H[3] += d;
        H[4] += e;
        H[5] += f;
        H[6] += g;
        H[7] += h;
    }

    // Convert final hash to bytes
    std::vector<uint8_t> digest;

    for (int i = 0; i < 8; ++i)
    {
        digest.push_back((H[i] >> 24) & 0xFF);
        digest.push_back((H[i] >> 16) & 0xFF);
        digest.push_back((H[i] >> 8) & 0xFF);
        digest.push_back(H[i] & 0xFF);
    }

    return digest;
}

int main()
{
    std::string input = "abc";

    // std::ofstream file("shaSTANDARD.txt");

    for(int i=0;i<vectorLength;i++)
    {
        std::vector<uint8_t> hash = standardSHA256(inputs[i]);
        std::string myHash = toHex(hash);

        std::cout << myHash << "\n";
        // file << myHash << std::endl;
    }

    // file.close();
    

    return 0;
}