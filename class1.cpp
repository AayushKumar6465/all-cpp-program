#include<iostream>
using namespace std;

/*class encapsulation 
{
	int a;
	public:
		void set(int x)
		{
			a = x;
		}
		int get()
		{
			return a;
		}
};
int main()
{
	encapsulation obj;
	obj.set(10);
	cout<<obj.get();
	return 0;
}*/

/*class poly
{
	public:
	void fun(int a)
	{
		cout<<"The Value Of a Is : "<<a<<endl;
	}	
	void fun(double a)
	{
		cout<<"The Value Of a Is : "<<a<<endl;
	}
	void fun(int a, int b)
	{
		cout<<"The Value Of a And b Is : "<<a<<" "<<b<<endl;
	}
};
int main()
{
	poly obj;
	obj.fun(10-4);
	obj.fun(24.7894);
	obj.fun(40,50);
	return 0;
}*/
class parent
{
	public:
		int id_parent=40;
};
class child : public parent
{
	public:
		int id_child=10;
};
int main()
{
	child obj;
	cout<<"The Child IS : "<<obj.id_child<<endl;
	cout<<"The Parent Is : "<<obj.id_parent;
	return 0;
}