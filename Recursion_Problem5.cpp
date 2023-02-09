#include<bits/stdc++.h>
using namespace std;

void print_number(int n)
{
	cout<<n<<" ";
	if(n<=0)
	{
		return ;
	}
	print_number(n-5);
	cout<<n<<" ";
}
int main()
{
	int n;
	cin>>n;
	print_number(n);
	return 0;
}
/*void fun(int n)
{
    if(n > 0)
    {
        fun(n-1);
        cout<< n;
        fun(n-1);
    }
}
 
int main()
{
    fun(4);
    return 0;
}*/
