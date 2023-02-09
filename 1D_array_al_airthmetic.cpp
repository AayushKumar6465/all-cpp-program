//Airthmetic Operations Performed In 1D Array
#include<stdio.h>

void operations(int a[], int n1, int b[], int n2, int size)
{
	int i, add[10], sub[10], mul[10];
	 
	for(i = 0; i < size; i ++) //Arithmetic Operation Performed  
    {
      add [i] = a[i] + b[i];
      sub [i] = a[i] - b[i];
      mul [i] = a[i] * b[i];
    }
    
   printf("Add\t Sub\t Mul\t\n"); // Print The Value Of All Operations   
   for(i = 0; i <size; i++)
   {
      printf("%d\t ", add[i]);
      printf("%d \t ", sub[i]);
      printf("%d \t ", mul[i]);
      printf("\n");
   }
}
int main()
{
   int size, i, a[10], b[10];

	printf("Enter Array Size:"); //Taking Size Of Array  
   	scanf("%d", &size);
    
   printf("Enter Elements Of 1st Array :\n"); //Taking Elements Of Array 1 
   for(i = 0; i < size; i++)
   {
      scanf("%d", &a[i]);
   }
    
   printf("Enter The Elements Of 2nd Array :\n"); //Taking Elements Of Array 2 
   for(i = 0; i < size; i ++)
   {
      scanf("%d", &b[i]);
   }
   operations(a, 10, b, 10, size);
   return 0;
}