#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  int n; cin>> n; 
  while( n--)
  {
    string s;
  cin>>s;
int flag=1;
int len= s.length();
// for( int i=0; i< n-1; i++)
// {
//   char ch=s[i];
//   if( '0'<=ch<='9' && 'a'<=s[i+1]<='z'  )
//   {
//     flag=0;
//     break;
//   }
// }
if( flag==1)
{
  string copy=s;
  sort(s.begin(), s.end());
  for( int i=0; i< n-1; i++)
  {
    if( s[i]!= copy[i])
    {
      flag=0;
      break;
    }
  }

}
string ans="YES";
if( flag==0)
{
  ans= "NO";
}
cout<<ans<<endl;

  }
}