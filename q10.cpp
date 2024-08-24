#include<iostream>
#include<vector>
using namespace std;
int main()
{
int nofcases;
cin>> nofcases;
while( nofcases)
{
  int n;
  cin>> n ;
  vector< int> arr;
  for( int  i =0 ; i< n ; i++)
  {
cin>> arr[ i];
  } 
//  array ka elments le liye hai 
for( int i =2; i< n ; i++)
{
  int jyada= arr[i]/2;
  for( int j =i-1; j< jyada ; j++)
  {
    if( arr[ i-1]>0 && arr[ i]>2 && arr[i+1]>0)
    {
      arr[i-1]= arr[i-1]-1;
      arr[i]= arr[ i]-2;
      arr[i+1]= arr[ i+1]-1;
    }
    else {
      continue;
    }
  }
}
//  sab elenments kog ghata diye honge ab check karte hai ;
bool ans ;
for( int i =0 ; i< n ; i++)
{
  if( arr[i]!=0)
  {
    ans =0;
    break;
  }
}
if( ans ==0 )
{
  cout<<"NO"<< endl;
}
else{
  cout<<" YES"<< endl;
}
nofcases--;
}
}
