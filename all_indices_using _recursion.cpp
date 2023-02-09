#include<bits/stdc++.h>
using namespace std;

int helper(int input[], int i, int size, int x, int output[], int m)
{
	if(size == 0)
	{
		return 0;
	}
	int count = 0;
	int a = 0;
	if(input[i] == x)
	{
		count++;
		output[m] = i;
		a = helper(input, i+1, size-1, x, output, m+1);
	}
	else
	{
		a = helper(input, i+1, size-1, x, output, m);
	}
	count = count + a;
	return count;
}
int all_indexes(int input[], int size, int x, int output[])
{
	int ans = helper(input, 0, size, x, output, 0);
	return ans;
}
int main()
{
	int n; cin>>n;
	int *input = new int[n];
	
	for(int i=0; i<n; i++)
	{
		cin>>input[i];
	}
	
	cout<<"Enter The Number you Check Indices : ";
	int x; cin>>x;
	int *output = new int[n];
	
	int size = all_indexes(input, n, x,output);
	for(int i=0; i<size; i++)
	{
		cout<<output[i]<<" ";
	}
	
	delete [] input;
	delete [] output;
	return 0;
}