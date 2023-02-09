#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter The Value To Change In Binary : ";
	cin>>n;
	long binary=0;
	long pv=1;
	while(n>0)
	{
		int lastbit = n%2;
		binary = binary + lastbit * pv;
		pv = pv*10;
		n = n/2;
   }
   cout<<binary<<endl;
   return 0;
}