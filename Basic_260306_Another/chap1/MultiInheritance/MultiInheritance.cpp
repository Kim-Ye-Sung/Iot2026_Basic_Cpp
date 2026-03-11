#include "Ta.h"

int main()
{
	Ta ta("Alice", 3.8, 15000);
	ta.print();
	
	cout << endl;

	Student* studentPtr = &ta;
	studentPtr->print();
	
	cout << endl;

	Professor* professorPtr = &ta;
	professorPtr->print();
	
	cout << endl;

	Person* personPtr = &ta;
	personPtr->print();
	
	cout << endl;


	return 0;
}