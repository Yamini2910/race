all:	horse.hpp horse.cpp race.hpp race.cpp main.cpp
	g++ -c horse.cpp
	g++ -c race.cpp
	g++ -c main.cpp
run:	all
	g++ horse.o race.o main.o -o exe
	./exec
clean:
	rm *.o
	rm exec
valgrind:
	valgrind --leak-check=yes ./exec
    
	    
