all:
	mkdir -p bin
	g++ -std=c++17 -Wall src/*.cpp -o bin/json_creator

run: all
	clear
	./bin/json_creator

clean:
	rm -f bin/json_creator
	rm -rf bin