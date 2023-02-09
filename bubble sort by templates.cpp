#include <iostream>
using namespace std;
  
template <typename T> 
void bubbleSort(T a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j-1])
                swap(a[j], a[j - 1]);
}
//Driver Code 
int main()
{
    float a[5] = { 10.4, 50.6, 30.9, 40.3, 20.5};
    int n = sizeof(a) / sizeof(a[0]);
  
    bubbleSort<float>(a, n);   // calls template function
  
    cout <<" Sorted array is : ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
  
    return 0;
}