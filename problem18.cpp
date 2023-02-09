#include<bits/stdc++.h>
using namespace std;

class demo
{
	int a,b;
	public:
	int *p = new int;
//	demo()
//	{
//		p = new int;
//	}
	void setdata(int x, int y, int z)
	{
		a = x; b = y; *p = z;
	}	
	void showdata()
	{
		cout<<"a = "<<a<<"\nb = "<<b<<"\np = "<<*p<<endl;
	}
//	demo(demo &d)
//	{
//		a = d.a;
//		b = d.b;
//	}
};
int main()
{
	demo d1;
	d1.setdata(3,4,5);
	d1.showdata();
	cout<<endl;
	demo d2 = d1;
	d1.showdata();
	cout<<endl;
	d2.showdata();
	return 0;
}