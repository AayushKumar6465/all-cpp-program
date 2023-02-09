#include<bits/stdc++.h>
using namespace std;
int main()
{
 char *str = "hello, prep";
 char str1[10];
 strncpy(str1, str, 9);
 cout << str1 << strlen(str1);
 return 0;
}