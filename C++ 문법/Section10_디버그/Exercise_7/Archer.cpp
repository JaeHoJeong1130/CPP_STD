#include "Archer.h"
#include "Pet.h"
#include <iostream>
using namespace std;

Archer::Archer()
{
	// 이런 저런 정보 채울 예정~
	_pet = new Pet();
}

Archer::Archer(int hp) : Player(hp)
{
	// 이런 저런 정보 채울 예정~
	_pet = new Pet();
}

Archer::~Archer()
{
	// 즐거웠다 내 펫 :(
	cout << "pet delete" << endl;
	if (_pet != nullptr)
		delete _pet;
}

