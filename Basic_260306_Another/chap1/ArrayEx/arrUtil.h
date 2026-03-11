#ifndef ARRUTIL_H
#define ARRUTIL_H

#include <iostream>
#include <random>

using namespace std;


template<typename T>
T getRandom(T min, T max)
{
	// c++ 11 이상에서 사용 가능한 랜덤 생성기(성능이 아주 좋음)
	static std::random_device rd;
	static std::mt19937 gen(rd());
	std::uniform_int_distribution<T> dist(min, max);

	return dist(gen);
}



template<typename T, size_t N>	// template이 들어간 함수는 반드시 헤더파일에서 바로 정의해야한다.
void printArr(T(&arr)[N])
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

// 배열의 크기를 지정해서 초기화하는 함수
template<size_t N>
int(&initArr(int(&arr)[N]))[N]	// initArr = 함수, (int(&arr)[N]) =  배열 참조를 받는다,    int(&)[N] = 배열 참조를 반환한다.
{
	for (size_t i = 0; i < N; i++)
	{
		arr[i] = i;
	}

	return arr;
}

// 배열의 요소를 섞는 함수
template<size_t N>
int(&shuffleArr(int(&arr)[N]))[N]	
{
	for (size_t i = 0; i < N-1; i++)
	{
		size_t j = getRandom<size_t>(i, N-1);

		int tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}

	return arr;
}



#endif
