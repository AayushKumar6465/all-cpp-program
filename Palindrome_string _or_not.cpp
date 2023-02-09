#include<bits/stdc++.h>
using namespace std;

/*//Check String Is palindrome Or Not
// Efficient Solution 
bool is_palindrome(char str[])  
{
	int i = 0;
	int j = strlen(str) - 1;
	while(j > i)
	{
		if(str[i] != str[j])
		{
			return false;
		}
		i++; j--;
	}
	return true;
}
int main()
{
	char str[10];
	cin>>str;
	int ans = is_palindrome(str);
	(ans == 1) ? (cout<<"True") : (cout<<"False");
	return 0;
}
*/
//Naive Solution
string is__palindrome(string s)
{
	string p = s;
	
	reverse(p.begin(), p.end());
	
	if(s == p)
		return "Yes";
	else
		return "No";	
}
int main()
{
	string s;
	cin>>s;
	cout<<is__palindrome(s);
	return 0;
}