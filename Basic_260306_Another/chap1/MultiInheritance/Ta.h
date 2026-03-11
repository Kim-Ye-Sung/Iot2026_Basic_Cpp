#ifndef TA_H
#define TA_H

#include "Student.h"
#include "Professor.h"

class Ta : public Student, public Professor
{
public:
	Ta(string name, double gpa, double salary);
	~Ta();
	void print();
};

#endif
