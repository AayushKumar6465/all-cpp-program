#include<iostream>
using namespace std;

int main()
{
	/*int n=5;
	int *p = 0;
	p = &n;
	cout<<*p<<endl;
	cout<<p<<endl;
	cout<<&n;*/
	//int a[] = {1, 2, 3, 4};
	//cout << *(a) << " " << *(a+1);
	char arr[20];
	int i;
	for(i=0;i<10;i++)
	{
		*(arr+i) = 65+i;
	}
	*(arr+i) = '\0';
	cout<<arr;
	return 0;
}