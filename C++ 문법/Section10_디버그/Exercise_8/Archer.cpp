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
	// ��ſ��� �� �� :(
	if (_pet != nullptr)
		delete _pet;
}

