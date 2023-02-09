#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[end]; // pivot
    int k = start - 1;      // Index of smaller element and indicates the right position of pivot found so far

    for (int i = start; i <= end - 1; i++)
    {
        // If current element is smaller than the pivot
        if (arr[i] < pivot)
        {
            i++; // increment index of smaller element
            int temp = arr[k];
            arr[k] = arr[i];
            arr[i] = temp;
        }
    }
    int temp = arr[k + 1];
    arr[k + 1] = arr[end];
    arr[end] = temp;
    return (k + 1);
}
void quickSort(int arr[], int start, int end)
{
    // your code goes here
    if (start >= end)
        return;
    else
    {
        int index = partition(arr, start, end);
        quickSort(arr, start, index - 1);
        quickSort(arr, index + 1, end);
    }
}
int main() 
{
    int n;
    cin >> n;

    int *arr = new int[n];

    for(int i = 0; i < n; i++) 
	{
        cin >> arr[i];
    }

    quickSort(arr, 0, n-1);
    for(int i = 0; i < n; i++) 
	{
        cout << arr[i] << " ";
    }
	delete [] arr;
	return 0;
}