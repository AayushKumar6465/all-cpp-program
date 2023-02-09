/*#include<bits/stdc++.h>
using namespace std;

int power(int x, int n)
{
	if(n == 0)
	{
		return 1;
	}
	
	return x * power(x, n-1);
}
int main()
{
	int x=2; 
	int n=5;
	int pow = power(x, n);
	cout<<pow;
	return 0;
}*/
include <iostream>
using namespace std;

void print(int n){
    if(n < 0){
        return;
    }
    if(n == 0){
        cout << n << " ";
        return;
    }
    print(n --);
    cout << n << “ “;
}

int main() {
    int num = 3;
    print(num);
}