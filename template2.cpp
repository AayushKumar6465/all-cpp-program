#include<iostream>
using namespace std;

template<typename T>
class demo
{
	T a;
	T b;
	public:
		demo(T x, T y);
		void showdata();
};

template<typename T>
demo<T>::demo(T x, T y)
{
	a = x;
	b = y;
}

template<typename T>
void demo<T>::showdata()
{
	cout<<a<<" "<<b;
}

// Driver Code 
int main()
{
	//demo obj;
	demo<int>obj(10,20);
	obj.showdata();
	return 0;
}