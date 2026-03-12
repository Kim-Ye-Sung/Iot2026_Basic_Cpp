#ifndef  EVENT_H
#define  EVENT_H

#include <iostream>
#include <vector>
#include <functional>

using namespace std;

class Event
{
private:
    vector<function<void()>> listeners;

public:
    void Add(function<void()> func);

    void Invoke();
};

#endif 