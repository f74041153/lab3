lab3:a.o main.o
	g++ -o lab3 a.o main.o

a.o:a.h a.cpp
	 g++ -c a.cpp
main.o:a.h main.cpp
	g++ -c main.cpp
