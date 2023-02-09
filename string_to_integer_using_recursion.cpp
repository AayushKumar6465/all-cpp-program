#include <bits/stdc++.h>
using namespace std;

int stringToNumber(char input[])
{
    // Write your code here
    static int sum = 0;
    int l = strlen(input);
    sum = sum * 10 + (input[0] - '0');
    
	if (input[1] != '\0')
        stringToNumber(input + 1);
    else
        return sum;
}

int main() 
{
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}
