#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
  int n;
  cin>>n;
  while(n--)
  {
int divide, len;
cin>>len>>divide;
string s;
cin>>s;
int parts=len/divide;
int start=0;
int ans=0;
while(divide )
{
  
  int count=0;
unordered_map<int , char>mp;
for(int i=start; i<(start+parts);i++)
{
  mp[s[i]]++;
  if( mp[s[i]]==1)
  {
    count++;
  }
 
}
for( char c='A'; c<='G'; c++)
{
  if(mp[c]==0)
  {
    ans++;
  }
}

start=start+parts;

divide--;
  }

  cout<<ans<<endl; 
   }
}