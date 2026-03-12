#include "Event.h"

void Event::Add(function<void()> func)
{
    listeners.push_back(func);
}

void Event::Invoke()
{
    for (auto& func : listeners)
    {
        func();
    }
}