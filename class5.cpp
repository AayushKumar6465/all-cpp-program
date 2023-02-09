#include<iostream>
using namespace std;

/*class demo
{
	int a;
	public:
		void input()
		{
			cout<<"Enter a NUmber : ";
			cin>>a;
		}
		demo operator+(demo t)
		{
			demo z;
			z.a = a + t.a;
			return z;
		}
		void display()
		{
			cout<<"The Sum Is : "<<a;
		}
};
int main()
{
	demo d1,d2,d3;
	d1.input();
	d2.input();
	d3 = d1 + d2;
	d3.display();
	return 0;
}*/
class demo
{
	int a,b;
	public:
		void input()
		{
			cout<<"Enter A Or B Is : ";
			cin>>a>>b;
		}
		demo operator++()
		{
			//a = --a;
			//b = --b;
			a++;
			b++;
		}
		void display()
		{
			cout<<a<<" "<<b;
		}
};
int main()
{
	demo d,d1;
	d.input();
	d.operator++();
	//d--;
	d.display();
	return 0;
}