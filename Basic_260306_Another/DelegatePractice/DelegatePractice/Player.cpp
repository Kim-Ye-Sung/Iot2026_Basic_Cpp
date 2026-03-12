#include "Player.h""

Player::Player(string name, Event&e, Monster&m) : name(name)
{
	Maybe(e, m);
}

void Player::printPlayer()
{
	cout << "My Name Is " << name << "!!!" << endl;
}

void Player::Maybe(Event& e, Monster& m)
{
	e.Add(bind(& Monster::printMonster, &m));
}
