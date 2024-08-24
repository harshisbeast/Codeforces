#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
int nc;
cin>> nc;
while( nc--)
{
  int n;
  cin>> n; 
  string s;
  cin>> s;
  unordered_map< char , int>mp;
  for( int i=0; i< s.length(); i++)
  {
    mp[s[i]]++;
  }


int ans=0;
for( char ch='A'; ch<='D'; ch++)
{
  if( mp[ch]>n)
  {
    ans= ans+n;
  }
  else{
    ans= ans+ mp[ch];
  }

}
cout<<ans<<endl;
}
}