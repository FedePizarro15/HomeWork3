all:
	mkdir -p bin
	g++ -std=c++17 -Wall src/*.cpp -o bin/figure_processor_app

run: all
	clear
	./bin/figure_processor_app

clean:
	rm -f bin/figure_processor_app
	rm -rf bin