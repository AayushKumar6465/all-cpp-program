#include <bits/stdc++.h>
using namespace std;

int main()
{
   cout<<"Enter An String : ";
   char str[20];
   cin.getline(str, 20);
   //gets(str);
   for(int i=0; i<strlen(str); i++)
   {
   		if(str[i] == ' ')
   		{
   			for(int j=i;j<strlen(str); j++)
   			{
   				str[j] = str[j+1];
			}
		}
   }
   cout<<str;
   return 0;
}
