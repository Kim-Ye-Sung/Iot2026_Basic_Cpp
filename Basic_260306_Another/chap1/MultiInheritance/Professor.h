#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Person.h"

class Professor : virtual public Person
{
protected:
	double salary;
public :
	Professor(string name, double salary);
	~Professor();
	void print();
};

#endif
