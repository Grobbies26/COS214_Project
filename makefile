prjct.out: main.o Rocket.o Falcon9Starlink.o Starlink.o
	g++ main.o Rocket.o Falcon9Starlink.o Starlink.o -o prjct.out

main.o: main.cpp
	g++ -c main.cpp

Rocket.o: Rocket.cpp
	g++ -c Rocket.cpp

Falcon9Starlink.o: Falcon9Starlink.cpp
	g++ -c Falcon9Starlink.cpp

Starlink.o: Starlink.cpp
	g++ -c Starlink.cpp

run:
	./prjct.out
	
clean:
	rm -f *.o prjct