#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
  int k;
  cin>>k;
  while(k--)
  {
int n;
cin>>n;
int arr[n];
for( int i=0;i< n; i++)
{
  cin>>arr[i];
}

int sum=0;
int ans=0;

int maxi=0;
for( int i=0; i< n-1; i++)
{
  if( arr[i]>maxi)
  {
maxi=arr[i];
if( sum==arr[i])
{
  ans++;
}
  }
  else{
    
    sum= sum-maxi;
    sum= sum+arr[i];
    if( sum==arr[i])
    {
      ans++;

    }
  }
  sum= sum+arr[i];
  maxi=max( arr[i], maxi);

}
cout<<ans<<endl;
  }
}