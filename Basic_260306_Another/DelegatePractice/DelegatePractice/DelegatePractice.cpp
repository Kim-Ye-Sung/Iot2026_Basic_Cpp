#include "Player.h"
#include "Event.h"
#include "Monster.h"

int main()
{
    Event e;
    
    Monster m("드래곤");

    Player p("영웅",e,m);

    //e.Add(bind(&Monster::printMonster, &m));
    e.Add(bind(&Player::printPlayer, &p));

    e.Invoke();

    return 0;
}