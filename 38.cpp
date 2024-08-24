
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int n ;
  cin>>n; 
  while( n--)
{
int size, k;
cin>> size >>k;
int arr[k];
for( int i=0; i< k ; i++)
{
  cin>>arr[i];
}
sort( arr , arr+k);
int noofones=0;
int steps=0;
for( int i=0; i< k-1 ; i++)

{
  if( arr[i]!=1)
  {
    noofones=noofones+ arr[i];
    steps= steps+arr[i]-1;
  }
  else if( arr[i]==1)
  {
    noofones++;
  }
}
int ans=0;
ans= ans+ noofones+ steps;
cout<< ans <<endl;

}
}