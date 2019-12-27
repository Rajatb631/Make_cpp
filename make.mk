all:	
	rm -rf file_generator
	g++ -g file_generator.cpp -o file_generator
	./file_generator
	python read_data.py
