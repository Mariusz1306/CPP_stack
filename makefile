main: main.o stack.o
	g++ -g -Wall $^ -o $@

stack.o: stack.cpp stack.h
	g++ -g -c -Wall $< -o $@

main.o: main.cpp stack.h
	g++ -g -c -Wall $< -o $@

.PHONY: clean

clean:
	-rm stack.o main.o main
