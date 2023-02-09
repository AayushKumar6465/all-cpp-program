#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n=5;
	int *p = &n;
	int **ptr = &p;
	
	cout<<" Value Of n Is : "<<n<<endl;
	cout<<" Value Of *p Is : "<<*p<<endl;
	cout<<" Value Of **p Is : "<<**ptr<<endl;
	
	cout<<endl<<"Value Of &n Is : "<<&n<<endl;
	cout<<endl<<"Value Of p Is : "<<p<<endl;
	cout<<endl<<"Value Of &p Is : "<<&p<<endl;
	cout<<endl<<"Value Of *ptr Is : "<<*ptr<<endl;
	return 0;
}
