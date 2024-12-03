Subsets: Subsets.o
	g++ -g -o Subsets.exe Subsets.o -pthread    

Subsets.o: Subsets/Subsets.cpp
	g++ -g  -c -pthread Subsets/Subsets.cpp
