#include<iostream>
using namespace std;
int main() 
{
    /*int n;
    cin >> n;
    int i = 1; 
    while(i <= n) {
        int j = 1;
        char ch = 'A' + n - i;
        while(j <= i) {
            cout << char(ch + j - 1);
            j++; 
        } 
        cout << endl;
        i++; 
    }*/
   /* int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
    	int s=0;
    	while(s<n-i)
    	{
    		cout<<" ";
    		s++;
		}
		int j=1;
		while(j<=i)
		{
			cout<<j;
			j++;
		}
		cout<<endl;
		i++;
	}*/
	int n;
	cin>>n;
	int i=1;
	while(i<=n)
	{
		int j=1;
		while(j<=n-i+1)
		{
			cout<<"*";
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}