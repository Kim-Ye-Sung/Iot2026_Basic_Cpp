#include <iostream>

using namespace std;

class Product
{
private:
	int Price;
	string Name;
public:
	Product(int p, string n) : Price(p), Name(n)
	{

	}

	inline int GetPrice() const
	{
		return Price;
	}

	inline string GetName() const
	{
		return Name;
	}
};

class TV : public Product
{
public:
	TV() : Product(300, "TV")
	{

	}
};

class Audio : public Product
{
public:
	Audio() : Product(400, "Audio")
	{

	}
};

class Computer : public Product
{
public:
	Computer() : Product(300, "Computer")
	{

	}

};

class Customer
{
private:
	int Money = 1000;

public:
	//void buy(TV tv)	// 1. 매개변수를 이런식으로 받아버리면 클래스의 갯수만큼 이러한 함수가 필요해지므로 함수가 너무 많아진다.
	//					// 그래서 클래스의 상속이 필요한 것이다.
	//{
	//	Money -= tv.Price;
	//}

	// 2. Template function을 이용한 방법
	//template<typename T>
	//void buy(T item)
	//{
	//	Money -= item.Price;	
	//}

	// 3. 다형성을 이용한 방법
	void buy(Product product)
	{
		Money -= product.GetPrice();

		cout << "구매한 것은 " << product.GetName() << endl;

		ShowMoney();
	}

	void ShowMoney()
	{
		cout << "남은 돈은 " << Money << "원 입니다!" << endl;
	}
};

class a
{

};

int main()
{
	Customer customer;

	TV tv;

	Audio audio;

	Computer comp;


	customer.buy(audio);
	

	return 0;
}