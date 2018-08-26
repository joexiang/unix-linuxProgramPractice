all:main.o
	g++ -g debug/main.o -o debug/fileHandler.out
main.o:main.cpp
	g++ -c -g -Wall main.cpp -o debug/main.o
	
clean:
	rm -rf debug/*.o debug/*.out