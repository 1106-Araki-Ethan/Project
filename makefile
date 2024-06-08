pet_lab: main.o pet.o
	g++ -o pet main.o pet.o

main.o: main.cpp pet.h
	g++ -c main.cpp -g

pet.o: pet.cpp pet.h
	g++ -c pet.cpp -g

clean:
	rm *.o pet
