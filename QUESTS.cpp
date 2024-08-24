#include<bits/stdc++.h>
using namespace std;
int main()
{
  intnc;
  cin>>nc;
  while( nc--)

  {
    int n, k;
    cin>>n>>k;
    int arr[n];
    int brr[n];
    int sum=0;
    for( int i=0; i< n; i++)
    {
      cin>>arr[i];
      
    }
    for( int i=0; i< n; i++)
    {
      cin>>brr[i];
    }
    for( int i=0; i<k ;i++)
    {
      sum= sum+ arr[i];
    }
    int ans=0;
int flag=0;
    int left=k;
  
    int t=0;
    int last=k-1;
    int j=0;
    while( left)
  {
if( flag==0)
{
  ans= ans+ arr[t];
  sum= sum-arr[t];
  t++;
  left--;
  flag=1;
}
else if(flag==1)
{
int maxi= brr[j]*left;
if( maxi>=sum)
{
  ans= ans+brr[j];
  sum= sum- arr[last];
  last--;
  j++;

}
else{
  j++;
}
flag=0;
}


  }
    cout<<ans<<endl;
  }
}