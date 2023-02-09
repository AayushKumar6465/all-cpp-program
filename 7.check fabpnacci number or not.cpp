#include<bits/stdc++.h>
using namespace std;

//print the fibonacci number series 
/*int main()
{
	int n1,n2,n3;
	n1 = 0;
	n2 = 1;
	int n;
	cin>>n;
	int i=1;
	while(i<=n)
	{
		if(n1<=n)
		{
			cout<<n1<<" ";
			n3 = n1+n2;
			n1 = n2;
			n2 = n3; 
		}
		i++;
	}
	return 0;
}*/
/*
//Check given number is fibonacci or not
int checkfibonacci(int n)
{
    int n1 = 0, n2 = 1, n3 = n1+n2;
    if (n==0 || n==1) 
		return true;
    while(n3<=n)
    {
    	if(n3 == n) 
    	return true;
        n1 = n2;
        n2 = n3;
        n3 = n1 + n2;
    }
    return false;
}
int main()
{
	int n; cin>>n;
	bool x = checkfibonacci(n);
	if(x==1) 
		cout<<"YES";
	else 	
		cout<<"NO";
	return 0;
}
*/
int fibo(int n)
{
	if(n==0||n==1)
	{
		return n;		
	}
	return fibo(n-1) + fibo(n-2);
}
int main()
{
	int n;
	cin>>n;
	int x = fibo(n);
	cout<<x<<endl;
}