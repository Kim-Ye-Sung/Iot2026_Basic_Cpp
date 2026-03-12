#ifndef  PLAYER_H
#define  PLAYER_H

#include <iostream>
#include "Monster.h"
#include "Event.h"

using namespace std;

class Player
{
private :
	string name;
public:
	Player(string name, Event&e, Monster&m);

	void Maybe(Event& e,Monster& m);

	void printPlayer();

};
#endif // ! PLAYER_H
