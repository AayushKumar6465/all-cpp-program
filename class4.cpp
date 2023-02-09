#include<iostream>
using namespace std;

class second;	//Forward Declaration
class first
{
	int a;
	public:
	void getdata(int x)
	{
		a = x;	
	}
	friend void sum(first, second);	
};
class second 
{
	int b;
	public:
	void getdata(int y)
	{
		b = y;	
	}	
	friend void sum(first,second);
};
void sum(first f, second s)
{
	cout<<"The Sum Is : "<<f.a + s.b; 
}
int main()
{
	first obj1;
	second obj2;
	obj1.getdata(10);
	obj2.getdata(20);
	sum(obj1,obj2);
	return 0;
}