#include<bits/stdc++.h>
using namespace std;

void say_digit(string str[], int n)
{
	if(n==0)	//Base Case
		return ;
	
	int digit = n%10;	//Processing
	n /= 10;
	
	say_digit(str, n);	//Recursive Call
	cout<<str[digit]<<" ";
}
int main()
{
	string str[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	int n;
	cin>>n;
	say_digit(str, n);
	return 0;
}
