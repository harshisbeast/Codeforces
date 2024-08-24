#include<iostream>
using namespace std;
int main()
{
  int nc; cin>> nc; while( nc--)
  {
    string s;

string ans="";    int n = s.length();
    if( n==1 ||n==2)
  {
for( char ch= 'a'; ch< =z; ch++)
{
  if( s[0]!= ch)
  {
    ans= s+ch;
  }
}
  }

else{
  int f=0;
  for( int i=1; i< n-1; i++)
  {
    if(s[i]!= s[i+1] && f==0)
    {
ans= ans+ s[i];
      continue;
    }
else{ 
  ans= s[0];   
  for( char ch= 'a'; ch< 'z'; ch++)
  {
    if( s[i]!= ch && s[i+1]!=ch && f==0)

    {
      ans= ans+ ch;
      f=1;

    }

  }
}

  }

  }
  cout<< ans<< endl;
  }
}