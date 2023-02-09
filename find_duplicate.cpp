#include <bits/stdc++.h>
using namespace std;
 
void printTwoRepeatNumber(int arr[], int size)
{
    int i, j;
    cout << "Repeating elements are ";
    for (i = 0; i < size; i++) 
	{
        for (j = i + 1; j < size; j++) 
		{
            if (arr[i] == arr[j]) 
			{
                cout << arr[i] << " ";
                break;
            }
        }
    }
}
 int main()
{
	int n;
	cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
    printTwoRepeatNumber(arr, n);
    return 0;
}