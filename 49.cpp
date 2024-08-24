#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
  int nc;
  cin>> nc;
  while( nc--)
  {
    int n ;
    cin>>n;
    int maxi=0;
    vector<int>arr;
int sq= sqrt( n);
for( int i=0 ; i<= sq; i++)
{
  if( n%i ==0)
  {
    arr.push_back(i);
  }
  if( n/i !=i)
  {
    arr.push_back(n/i)
  }
}
int nn= arr.size();
sort(arr,arr+nn );
int ans=0;
for( int i=0; i<nn-1 ; i++)
{
  if( arr[i]==arr[i+1])
  {
    ans++;
  }
  else{
    maxi = max( maxi ,ans);
    ans=0;
  }
}

cout<< maxi<<endl;
  }
}