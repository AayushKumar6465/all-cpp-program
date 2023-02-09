#include<bits/stdc++.h>
using namespace std;

int x = 4;
int main()
{
	int x = 5;
	cout<<"local variable : "<<x<<endl;
	cout<<"global variable : "<<::x<<endl;
	
	//x++;
	::x++;
	cout<<"local variable : "<<x<<endl;
	cout<<"global variable : "<<::x<<endl;
	return 0;
}