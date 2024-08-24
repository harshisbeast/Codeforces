#include<iostream>
using namespace std;
int main()
{
  int noofcases;
  cin>>noofcases;
   while( noofcases)
   {
    int a, b ,div;
    cin>> noofcases;
    int ans=0;
    int val = div/a;
    int val2= div/b;
    ans= ans+2+val+val2;
    cout<< ans<< endl;
    noofcases--;
   }
}