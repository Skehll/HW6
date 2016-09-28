all: build doc game

clean:
	rm *o game *html *xml

archive:
	tar cvf ../HW6.tar *.cc Makefile

build:
	g++ -c *.cc

doc:
	doxygen <config-file>

game: game.o main.o othello.o
	g++ game.o main.o othello.o -o game

game.o: game.cc
	g++ -c game.cc

main.o: main.cc
	g++ -c main.cc

othello.o: othello.cc
	g++ -c othello.cc
