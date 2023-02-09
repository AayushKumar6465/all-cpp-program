#include<iostream>
using namespace std;

//Hybrid Inheritance 
class first
{
	public:
		first()
		{
			cout<<"we are in first";
		}
};
class second : public first
{
	public:
		second()
		{
			cout<<"\nwe are in second";	
		}	
};
class third : public first
{
	public:
		third()
		{
			cout<<"\nwe are in third";	
		}	
};
class fourth : public second, public third 
{
	public:
		fourth()
		{
			cout<<"\nWe Are In Fourth";	
		}	
};
int main()
{
	fourth f;
	return 0;
}