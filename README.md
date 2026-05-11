# DualRailSHA256

Welcome to the README for DualRailSHA256. Within are 3 different versions of the same SHA256 algorithm, as well as simulation for two of them.

Asynchronous architecture is a new computing concept. Within is a simulation to compare equivalent synchronous and a novel dual rail asynchronous architecture.
Within the DR async simulation, the simulation itself performs the handshake between two cells as well as emulate a Muller C-Element.
The sync pipelined simulation moves data forward through each stage based on the critical path. 

shaStandards.cpp contains the preprocessing, input sequence, and hashing constants k.
This file is included in sha.cpp, pipelineSHA256.cpp, and shaDualRail.cpp.

basicGates.cpp contains custom primitives for the gates used in the adder and the SHA algorithm.
basicGatesDR.cpp contains custom primitives for the gates used in the DR adder and the DR SHA algorithm.
They are nearly identical, however basicGatesDR.cpp utilizes dual rail encoded bits for asynchronous logic.

KSAdder.cpp contains the 32bit adder used in the SHA256 algorithm.
KSAdderDR.cpp contains the 32bit adder used in the dual rail asynchronous SHA256 algorithm.

sha.cpp is a standard SHA256 implementation to compare results of the other two against.
pipelineSHA256.cpp is the synchronous version of the asynchronous version developed in shaDualRail.cpp.
shaDualRail.cpp is the main work of this project. It contains the code needed to act as asynchronous architecture and simulate it.

validityCheck.xlsx is the joined output hashes of each implementation to ensure validity.
DR_statistics.xlsx is the statistics file for the dual rail implementation. It contains the entry and exit times for each input, as well as the calculations used in the final report.

The compiler used was g++.exe (MinGW.org GCC-6.3.0-1) 6.3.0
The following commands were used to compile each of the 3 implementations
g++ -std=c++11  .\sha.cpp -o sha
g++ -std=c++11  .\pipelineSHA256.cpp -o pipelineSHA256
g++ -std=c++11  .\shaDualRail.cpp -o shaDualRail

In sha.cpp, pipelineSHA256.cpp, shaDualRail.cpp current state:
Upon compile and run, it will print the hash of every input in the sequence

For the pipeline and DR files, there exists a function
findKSA32Delay() and findDRKSA32Delay() respectively. This is a playground to give test inputs to the adder. 
This is also how I found the critical path of the KSA32 adder. 

For changes and personal tests, follow the form of the code.
This code contains a smaller library of primitive dual rail gates (DRGs). 
These DRGs combined with the DR class for encoded bits allow for calculations on when data flows through a block.
getLatestArrival32B acts as the Muller C-Element by presenting data to the next cell only when the last bit has been resolved.
By moving getLatestArrival32B you can adjust the effective pipeline of the implementation.
