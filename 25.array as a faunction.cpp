#include<iostream>
using namespace std;

void modify(int []);

int main()
{
	int marks[] = {15,25,35,45};
	modify(marks);
	cout<<marks[2]<<endl;
	return 0;
}

void modify(int arr[])
{
	arr[2] = 50;
}