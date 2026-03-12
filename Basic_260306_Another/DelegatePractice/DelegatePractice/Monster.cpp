#include "Monster.h"

Monster::Monster(string name) : name(name)
{

}

void Monster::printMonster()
{
	cout << "I'm Monster!!! My Name Is " << name << "!!!!!" << endl;
}