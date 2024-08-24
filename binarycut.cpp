#include<iostream>
using namespace std;
int main()
{
  int n; 
  cin>>n; 
  while( n--)
  {
    string s;
    cin>>s;
    int ans=0;
    int ans1= 0;
    int p= s.length();
    for( int i=0 ;i< p-1; i++)
    {
      if( s[i]=='1' && s[i+1]=='0'    || s[i]=='0'&& s[i+1]=='1')
      {
        ans++;
      }
      
      
    }
    cout<<ans-1<<endl;
  }
}