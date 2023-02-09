#include<iostream>
#include<stack>
using namespace std;

int main()
{
	stack<int>s;
	
	s.push(5);
	s.push(10);
	s.push(15);
	s.push(20);
	
	//s.pop();
//	cout<<"The Top Element Is : "<<s.top();
//	if( !s.empty() )
//		cout<<"\nThis Is Not Empty";
//	else
//		cout<<"\nThis Is Empty";
	cout<<"The Size Of Of Stack IS : "<<s.size()<<endl;
	return 0;
}
 