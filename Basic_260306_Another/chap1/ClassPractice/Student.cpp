#include "Student.h"

Student::Student() : Person(), gpa(0)
{

}

Student::Student(long identity, double gpa) : Person(identity), gpa(gpa)
{
	assert(gpa >= 0.0 && gpa <= 4.0);
}

Student::Student(const Student& other) : Person(other), gpa(other.gpa)
{
}

Student::~Student()
{

}

void Student::print() const
{
	Person::print();
	cout << "GPA : " << fixed << setprecision(2) << gpa << endl;
}