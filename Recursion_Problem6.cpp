#include<bits/stdc++.h>
using namespace std;
/*void print(int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
    int n;
    cin>>n;
    //Function Calling
    print(n);
    cout<<endl;
    //t--;
	}
  	return 0;
}
void print(int n) //Calling Function 
{
  cout<<n<<" "; 
  if(n<=0)  //Base Condition
  {
    return ;
  }
  print(n-5); //Recursive Call
  cout<<n<<" ";
}*/
#include<bits/stdc++.h>
using namespace std;
class education
{
   char name[10];
   public:
   void disp()
   {
      cout << "Its education system";
   }
};
class school :public education
{
   public: void disp()
   {
      cout<<"Its school education system";
   }
};
int main()
{
   school s;
   s.disp();
   return 0;
}