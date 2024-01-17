build:
	g++ -o main ./main.cpp

run:
	./main

.PHONY: clean
clean : 
	- rm -f ./main
