#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex mtx;

void worker_inc(int& num)
{	
	lock_guard<mutex> lock(mtx);

	for (int i = 0; i < 1000; i++)
	{
		num += 1;
	}
}

void worker_dec(int& num)
{
	lock_guard<mutex> lock(mtx);

	for (int i = 0; i < 1000; i++)
	{
		num -= 1;
	}
}

int main()
{
	int count = 0;

	thread t(worker_inc, ref(count));
	thread t2(worker_dec, ref(count));
	
	//worker_inc(count);


	t.join();
	t2.join();

	cout << "count : " << count << endl;		// 결과가 랜덤하게 나옴
												// 


	return 0;
}