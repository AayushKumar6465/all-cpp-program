/*#include<iostream>
using namespace std;

int main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	int min;
	min = a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]<min)
		{
			min = a[i];
		}
	}
	cout<<"Min : "<<min;
	return 0;
}*/
#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
      {
        cin>>arr[m][n];
      }
    }
    int k;
    cin>>k;
    for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
      {
        arr[i][j] = k*arr[i][j];
      }
    }
    for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
      {
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }
    return 0;
  }