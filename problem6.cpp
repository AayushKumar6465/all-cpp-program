#include<bits/stdc++.h>
using namespace std;

//check reverse string 
int reverse(char name[], int n)
{
	int s=0,e=n-1;
	while(s<e)
	{
		swap(name[s++], name[e--]);
	}
	
}

//check length of string 
int get_length(char name[])
{
	int count=0;
	for(int i=0;name[i] != '\0';i++)
	{
		count++;
	}
	return count;
}

//for change  uppercase to lowercase
char to_lowercase( char ch)
{
	if(ch>='a' && ch<='z')
	{
		return 0;
	}
	else
	{
		char temp;
		temp = ch - 'A' + 'a';
		return temp;
	}
}

//check palindrome or not
int palindrome(char name[], int n)
{
	int s=0;
	int e=n-1;
	while(s<=e)
	{
		if(to_lowercase(name[s]) != to_lowercase(name[e]))
		{
			return 0;	
		} 
		else
		{
			s++;
			e--;
		}
		return 1;
	}
}
int main()
{
	char name[20];
	//for input a string 
	cout<<"enter your name : ";
	cin.getline(name, 20);
	cout<<"Your Name Is : "<<name<<endl;
	
	//for check  length
	int len = get_length(name);
	cout<<"the length is : "<<len<<endl;
	reverse(name,len);
	
	//for reverse string
	cout<<"After Reverse Your Name Is : "<<name<<endl;
	
	//for check palindrome or not
	cout<<"Palindeome : "<<palindrome(name,len);
	return 0;
}

