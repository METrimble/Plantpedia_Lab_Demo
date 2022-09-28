CC = g++ -std=c++11
exe_file = runplant

$(exe_file): tree.o plantpedia.o flower.o driver.o
	$(CC) tree.o plantpedia.o flower.o driver.o -o $(exe_file)
	
tree.o: tree.cpp
	$(CC) -c tree.cpp
plantpedia.o: plantpedia.cpp
	$(CC) -c plantpedia.cpp	
flower.o: flower.cpp
	$(CC) -c flower.cpp
driver.o: driver.cpp
	$(CC) -c driver.cpp

clean:
	rm -f *.out *.o $(exe_file)
