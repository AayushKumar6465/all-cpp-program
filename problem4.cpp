#include<iostream>
using namespace std;

int get_sum(int *arr, int n)
{
	cout<<"Size Is : "<<sizeof(arr)<<endl;
	int sum=0;
	for(int i=0;i<4;i++)
	{
		sum += arr[i];
	}
	return sum;
}
int main()
{
	int sum,arr[6] = {2,6,4,9,1,5};
	sum = get_sum(arr+1, 4);
	cout<<" Sum Is : "<<sum<<endl;
	return 0;
}