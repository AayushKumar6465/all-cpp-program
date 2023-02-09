#include<bits/stdc++.h>
using namespace std;

void intersection(int input1[], int input2[], int size1, int size2) 
{
    int input3[10000]={0};
    for(int i = 0; i < size1; i++)
	{
        for(int j = 0; j < size2; j++)
		{
            if( input1[i] == input2[j] && ( input2[j] !=input3[j] ) )
			{
                cout << input2[j] << endl;
                input3[j] = input2[j];
                break;
            }
        }
    }
}
int main()
{
	int n1;
	cin>>n1;
	int arr1[n1];
	for(int i=0;i<n1;i++)
	{
		cin>>arr1[i];
	}
	
	int n2;
	cin>>n2;
	int arr2[n2];
	for(int i=0;i<n2;i++)
	{
		cin>>arr2[i];
	}
	intersection(arr1, arr2, n1, n2);
	return 0;
}