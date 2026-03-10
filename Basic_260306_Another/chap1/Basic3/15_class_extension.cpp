#include <iostream>

using namespace std;

class Parent
{
private:
	long ID;

public:
	void setId(long id);

	long getId()
	{
		return ID;
	}

	Parent(long id);
};

Parent::Parent(long id)
{
	if (id >= 100000l && id <= 999999l)
	{
		cout << "안녕하세요!" << endl;
		this->ID = id;
	}
	else
	{
		this->ID = 0l;
	}
}

void Parent::setId(long id)
{
	ID = id;
}

class Child : public Parent
{
private:
	double tech_level;

public:
	Child(long id);

	Child(long id, double tech_level);

	Child();

	double getTech_level();

	void set_Tech_level(double tech_level);
	
};


Child::Child() : Parent(0l), tech_level(0.0f){}	// 아무 매개변수도 안받는 기본 생성자 정의

Child::Child(long id) : Parent(id)	 // 매개변수 하나를 받아서 바로 초기화
{
	cout << "내 ID는 " << getId() << endl;
}

Child::Child(long id, double tech_level) : Parent(id)  // 매개변수는 여러개인데, tech_level은 따로 초기화
{

	cout << "처음의 ID는 " << getId() <<  endl;
	setId((id + 100040));
	this->tech_level = tech_level;

	cout <<  "나중에는 " << getId() << "   " << getTech_level() << endl;
}

double Child::getTech_level()
{
	return tech_level;
}

void Child::set_Tech_level(double tech_level)
{
	this->tech_level = tech_level;
}


int main()
{
	Parent p(111111l);

	Child c(150060l, 50.0f);

	Child c1(150060l);

	Child c2;

	c.setId(222222l);

	cout <<"Child의 ID : " << c.getId() << endl;
	
	cout << "Child2의 ID : " << c2.getId() << "   " << c2.getTech_level() << endl;
 
	return 0;
}