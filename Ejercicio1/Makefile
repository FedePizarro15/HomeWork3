all:
	mkdir -p bin data
	g++ -std=c++17 -Wall src/*.cpp examples/main.cpp -o bin/flight_app

run: all
	clear
	./bin/flight_app

clean:
	rm -f bin/flight_app data/flight_data.bin
	rm -rf bin data