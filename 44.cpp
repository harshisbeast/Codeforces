#include<iostream>
using namespace std;
int main()
{
  int nc;
   cin>> nc;
    while(nc--)
   {
int legs;
cin>> legs;
int ans=0;
 ans= ans+ (legs/4);
 legs= legs%4;
 ans= ans+ legs/2;
 cout<< ans<<endl;
   }

}