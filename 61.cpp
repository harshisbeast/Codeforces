#include<iostream>
#include<map>
using namespace std;
int main()
{
  int nc;
  cin>>nc;
while(nc--)
{
  int n ;
  cin>>n;
int arr[n];
  int sum=0;
  unordered_map<int , int>mp;
  for( int i=0;i< n; i++)
  {
cin>>arr[i];
sum= sum+ arr[i];
mp[sum]++;
  }
  vector<int> ans;
  int i=n-1;
  int sum2=0;
  while( i>=0)
  {
int sum2=arr[i]+sum2;
if( mp[sum2]==1)
{
  if(i-1>=0)
  {
    ans.push_back(arr[i-1]);
    ans.push_back( arr[i]);
  i--;
  }

}
else{
  ans.push_back(arr[i] );
}
i--;


  }
for( int i=0; i<n; i++)
{
  cout<<ans[i]<<" ";
}


cout<< endl;
}

}