#include "Ta.h"

Ta::Ta(string name, double gpa, double salary) : Person(name), Student(name, gpa), Professor(name, salary)
{

}

Ta::~Ta()
{

}

void Ta::print()
{
	cout << "Teaching Assistance Name : " << name << endl;
	cout << "Gpa : " << showpoint << gpa << endl;
	cout << "Salary : " << showpoint << salary << endl;
}