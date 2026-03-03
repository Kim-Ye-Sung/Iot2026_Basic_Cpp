// 이름 나이 학번을 가지는 클래스를 하나 만들어보자

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class MyClass
{
private :
	char name[20];
	int age;
	int ID;

public:
	void SetData(const char* aname, int aage, int aID)
	{
		strcpy(name, aname);
		age = aage;
		ID = aID;
	}

	void GetData()
	{
		std::cout << "당신의 이름은 " << name << " 이며, 나이는 " << age << "살이고, 학번은 " << ID << "입니다." << std::endl;
	}
};

int main()
{
	MyClass obj;	// 디폴트 생성자 호출. MyClass obj() 함수 호출

	obj.SetData("김예성", 30, 20162944);

	obj.GetData();

	return 0;
}
