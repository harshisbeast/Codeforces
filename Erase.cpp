#include bits/stdc++.h
using namespace std;
int main()
{
 int nc;
 cin>>nc;
 while( nc--)
 {
  int n;
 cin>>n;
 string s;
 cin>>s;
 int ans=0;
 unordered_map<char, int>mp;
 for( int i=0; i<n; i++)
 {
  mp[s[i]]++;
  if( mp[s[i]]==1)
  {
    ans= ans+ n-i;
  }

 }
 cout<<ans<<endl;

 }

}