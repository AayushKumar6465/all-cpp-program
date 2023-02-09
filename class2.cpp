#include<iostream>
using namespace std;

/*class complex
{
	int a,b;
	public:
		void setdata(int x, int y)
		{
			a = x;  b = y;
		}
		void showdata()
		{
			cout<<"a = "<<a<<"\nb = "<<b;
		}
		complex add(complex c)
		{
			complex temp;
			temp.a = a + c.a;
			temp.b = b + c.b;
			return temp;
		}
};
int main()
{
	complex c1,c2,c3;
	c1.setdata(10,20);
	c2.setdata(30,40);
	c3 = c1.add(c2);
	c3.showdata();
	return 0;
}*/
void demo()
{
	int count=0;
	cout<<count<<" ";
	count++;
}
int main()
{
	for(int i=0;i<=5;i++)
	{
		demo();
	}
	return 0;
}