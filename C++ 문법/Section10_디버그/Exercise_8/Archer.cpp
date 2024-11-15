#include "Archer.h"
#include "Pet.h"
#include <iostream>
using namespace std;

Archer::Archer(Pet* pet) : _pet(pet)
{
	
}

Archer::Archer(int hp) : Player(hp)
{
}

Archer::~Archer()
{
	cout << "delete" << endl;
	// Áñ°Å¿ü´Ù ³» Æê :(
	if (_pet != nullptr)
		delete _pet;
}

