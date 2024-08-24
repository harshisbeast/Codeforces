#include<iostream>
using namespace std;
int main()
{
  int noofcases;
  cin>> noofcases;
while(noofcases)
{
  int n ;
  cin>>n ;
  int nn=n;
  int count=0;
  while( n>0)
  {
    int rem= n%10;
    if(rem==0|| rem==1)

    {
      count=0;
    }
    else{
      count=-1;
      break;
    }
    n= n/10;
  }
  string ans="";
  if( count==0)
  {
ans="YES";
  }
  else{
   while (nn>0)
   {
    nn=nn/11;
    
   }
   
  }

cout<<ans<<endl;
  noofcases--;
}
}