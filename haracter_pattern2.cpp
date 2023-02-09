#include<iostream>
using namespace std;
/*int main()
{      
    int n;
    cin>>n;
    int i=1;
    while( i <= n)
	{
		int j=1;
		while(j<=i)
		{
			char ch = 'A' + i - 1;
			cout<<ch;
			j++;
		}
		cout<<endl;
		i++;
    }
    return 0;
}*/
void print(int arr[])
{
   int n = sizeof(arr)/sizeof(arr[0]);
   int i;
   for (i = 0; i < n; i++)
      cout<< arr[i];
} 
int main()
{
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
   print(arr);
   return 0;
}