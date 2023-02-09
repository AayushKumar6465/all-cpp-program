#include<iostream>
using namespace std;

int modify(int *array)
{
	array[2] = 555;
	cout<<array[3]<<endl;
	return 0;
}
int main()
{
	int arr[] = {10,20,30,40};
	cout<<arr<<endl;
	modify(arr);
	return 0;
}