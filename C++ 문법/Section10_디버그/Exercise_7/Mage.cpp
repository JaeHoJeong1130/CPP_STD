#include "Mage.h"
#include <iostream>
using namespace std;
Mage::Mage()
{

}

Mage::Mage(int hp) : Player(hp)
{

}

Mage::~Mage()
{
	cout << "Mage delete" << endl;
}

