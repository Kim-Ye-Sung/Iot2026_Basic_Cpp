#ifndef MONSTER_H
#define MONSTER_H

#include <iostream>

using namespace std;

class Monster
{
private:
	string name;

public :
	Monster(string name);

	void printMonster();
};

#endif