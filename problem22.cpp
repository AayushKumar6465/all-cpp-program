//#include <bits/stdc++.h>
//using namespace std;
//
//int count_x(char arr[])
//{
//	int count = 0;
//	for(int i=0; arr[i] != '\0'; i++)
//	{
//		if(arr[i] == 'x' || arr[i] == 'X')	
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//  int t;
//  cin>>t;
//  while(t--)
//  {
//    int n; 
//	cin>>n;
//    char a[n];
//    for(int i=0; i<n; i++)
//    {
//      cin>>a[i];
//    }
//    cout<<count_x(a);
//  }
//  return 0;
//}
#include <bits/stdc++.h>
using namespace std;

int floor_search(int arr[], int n, int x)
{
  if(x >= arr[n-1])
  {
    return n-1;
  }
  
  if(x < arr[0])
  {
    return -1;
  }
  
  for(int i=1; i<n; i++)
  {
    if(arr[i] > x)
    {
      return (i-1);
    }
  }
  return -1;
}
int main()
{
  int t; cin>>t;
  while(t--)
  {
    int n; 	cin>>n;
    int x;	cin>>x; 
    int arr[n];
    for(int i=0; i<n; i++)
    {
      cin>>arr[i];
    }
      
    cout<<floor_search(arr, n, x)<<endl;
  }
    return 0;
}