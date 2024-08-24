#include<iostream>
using namespace std;
int main()
{
int noofcases;
cin>> noofcases;
while(noofcases)
{
  int a , b , c;
  cin>>a>>b >>c;
  if(a<b && b< c)
  {
    cout<<"STAIRS";
  }
  else if( a<b && b>c)
  {
    cout<<"PEAK";

  }
  else {
    cout<<"NONE";
  }
  cout<<endl;
  noofcases--;
}
}