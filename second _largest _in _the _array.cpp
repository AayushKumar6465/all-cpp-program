#include <bits/stdc++.h>
using namespace std;

int find_Second_Largest(int arr[], int n)
{
   int first_largest = INT_MIN;
   for (int i = 0; i < n; i++)
   {
      if (first_largest < arr[i])
      {
         first_largest = arr[i];
      }
   }
   int second_largest = INT_MIN;
   for (int i = 0; i < n; i++)
   {
      if (arr[i] > second_largest and arr[i] < first_largest)
      {
         second_largest = arr[i];
      }
   }
	return second_largest;
}
int main()
{
   int arr[] = {12, 35, 1, 10, 34, 1};
   int n = sizeof(arr) / sizeof(arr[0]);

   int answer = find_Second_Largest(arr, n);

   cout << "The second largest element in the array is: " << answer;

   return 0;
}
