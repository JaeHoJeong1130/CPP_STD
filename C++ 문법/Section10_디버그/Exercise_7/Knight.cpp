#include "Knight.h"
#include <iostream>
using namespace std;

Knight::Knight() 
{

}

Knight::Knight(int hp) : Player(hp)
{

}

Knight::~Knight()
{
	cout << "Knight delete" << endl;
}

