#include<iostream>
using namespace std;
//Implementations Of Constructors
/*class demo		//Default constructor 
{
	public:
		int a,b;
		demo()
		{
			a=10;
			b=20;
		}
};
int main()
{
	demo d;
	cout<<d.a<<" "<<d.b<<endl;
	return 0;
}*/
/*class demo		//Paramitarized Constructor
{
	int x,y;
	public:
	demo(int a,int b)
	{
		x = a;
		y = b;
	}
	int  sum()
	{
		return x+y;
	}
};
int main()
{
	demo d(10,20);
	cout<<"The Sum Is : "<<d.sum();
	return 0;
}*/
/*class demo		//Copy constructor
{
	int a;
	public:
	demo(int p)
	{
		a=p;	
	}	
	demo(demo &t)
	{
		a = t.a;
	}
	void display()
	{
		cout<<a<<" ";
	}
};
int main()
{
	demo d(10);
	demo d1(d);
	d.display();
	d1.display();
	return 0;
}*/
//Implementations Of Destructor
class demo
{
	int a,b;
	public:
	~demo()
	{
		cout<<"Destructor";
	}	
};
void fun()
{
	demo obj;
}
int main()
{
	fun();
	return 0;
}