main: Sale.o SalesPerson.o Main.o Display.o
	g++ Main.o SalesPerson.o Sale.o Display.o -o main

Sale.o: Sale.cpp
	g++ -c Sale.cpp

SalesPerson.o: SalesPerson.cpp
	g++ -c SalesPerson.cpp

Main.o: Main.cpp
	g++ -c Main.cpp

Display.o: Display.cpp
	g++ -c Display.cpp

clean:
	rm main *.o
