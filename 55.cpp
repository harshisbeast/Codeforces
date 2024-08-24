#include<iostream>
using namespace std;
int main()
{
  int nc;
  cin>> nc;
   while( nc--)
   {
int n , shower, total;
vecrtor<vector<int>>arr;
for( int i=0; i< n; i++ )
{
  cin>>arr[i][0];
  cin>>arr[i][1];
}
int ans;
intflag=0;
int startdiff= arr[0][0];
if( startdiff-0>= shower)

{
  cout<<"YES"<<endl;
}
else{
for( int i=0; i< n-1; i++)
{
  int start= arr[i][1];
  int end= arr[i+1][0];
  int diff= end- start;
  if( diff>=shower)
  {
    flag=1;
  
    break;
  }

}
}
if( flag==1)
{
  cout<<"YES"<<endl;

}
else{
  cout<<"NO"<<endl;
}
   }
}