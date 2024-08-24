#include<iostream>
# include<unordered_map>
using namespace std;
int main()
{
  int nc;
  cin>>nc;
  while( nc--)
  {
    int n , q;
    cin>>n>>q;
    string a ;
     string b ; 
cin>>a>>b;
int arr[q][2];
for( int i=0; i< n; i++)
{
  cin>>arr[i][0];
  cin>>arr[i][1];
}
for( int i=0; i<q; i++)
  {
    unordered_map<char , int>mp1;
   int ans=0;
   unordered_map<char, int>mp2;
    int start= q[i][0];
    int end= q[i][1];
    for( int j=start; j<end; j++)
    {
mp1[a[j]]++;
mp2[b[j]]++;

    }
    for( int t=0 ;t< 26; t++)
    {
      if( mp1['a'-i]!=mp2['a'-i] )
      {
        ans++;
      }
    }

cout<<ans<<endl;
  }


cout<<endl;
  }
}