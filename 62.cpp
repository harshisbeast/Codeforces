#include<iostream>
using namespace std;
int main()
{
  int nc;cin>>nc;
  while ((nc--))
  {

string s;
cin>>s;
int len= s.length();
string ans;
if( len<3)
{
  ans="NO";
}
else if( len==3)
{
  if( s[0]=='1' && s[1]='0' && 2<=s[2]>=9)
  {
    ans="YES";
  }
  else{
    ans="NO";
  }
}
else if( n>3)

{
  // pehla 2 10 and baki kuch bhi 
  if( s[0]=='1' && s[1]=='0' && s[2]!=0)
  {
    ans="YES";


  }
  else{
    ans="NO";
  }
}
cout<<ans<<endl;
  }
  
  
}