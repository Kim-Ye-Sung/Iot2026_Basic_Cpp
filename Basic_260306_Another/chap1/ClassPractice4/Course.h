#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <iostream>
#include <cassert>

using namespace std;

class Course
{
private:
	int size;	// 
	string* stdNames;

public:
	Course();
	~Course();
	void addStudent(string studentName);
	void print() const;
};


#endif // !COURSE_H
