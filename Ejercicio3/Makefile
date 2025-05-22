all:
	mkdir -p bin data
	g++ -std=c++17 -Wall src/*.cpp examples/main.cpp -o bin/json_creator

run: all
	clear
	./bin/json_creator

clean:
	rm -f bin/json_creator data/output.json
	rm -rf bin data