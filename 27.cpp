
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n;
  cin>> n;
  while( n--)
  {
    int n;
    int arr[n];
    for( int i=0; i< n; i++)
    {
      cin>>arr[i];
    }
    int brr[n+1];
for( int i=0; i< n+1; i++)
{
  cin>>brr[i];
}

int ans=0;
int mini=1e9;
int maxi=-1e9;
int checker= brr[n+1];
for( int i=0; i< n ; i++)
{
maxi= max( maxi, checker);
mini=min( mini, checker);

}
if( checker!=maxi && checker!=mini){
ans=1+ans;
}
for( int i=0 ;i< n ;i++)
{
  ans= abs( arr[i]-brr[i])+ans;
}
cout<<ans<<endl;
  }
}
