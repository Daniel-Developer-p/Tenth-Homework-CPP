#include <iostream>

using namespace std;

template<typename T>
T identity( const T& e )
{
	return e;
}

template<int n>
struct fibonacci
{
	static constexpr int value = fibonacci<n-1>::value + fibonacci<n-2>::value;
};

template<>
struct fibonacci<0>
{
	static constexpr value = 0;
};

template<>
struct Fibonacci<1>
{
	static conexpr value = 1;
};

int main()
{
    return Fibonacci<5>::value;
}