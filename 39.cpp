#include<iostream>
using namespace std;
int main()
{
  int noofcase;
  cin>> noofcase;
  while( noofcase--){
int n , jump , swim;
string s;

cin>> n >> jump >> swim;
cin>>s;
string ans="YES";
if( jump>= n)
{
ans="YES";
}
else{
 for( int i=-1 ;i< n-1 ; i++)
 {
if( s[i+1]=='L')
{
  i++;
}
else if( s[i+1]=='W')
{
  //  agar water hai 
  int longest = jump+i+1;
  while( longest-- && s[i]== 'W')
  {
  i++;
  }
if( s[i]=='W')
{
  while(swim-- && s[i]=='W')
  {
    i++;
  }

}
if( s[i]=='W')
{
  ans="NO";
  break;
}
}

else if( s[i+1]=="C" && s[i]!='W')
{
  int longest= jump+i;
  while( longest-- && s[i]=="C")
  {
    i++;
  }
  if( s[i]=="C")
  {
    ans="NO";
    break;
  }
}
else if (s[i+1]=="C" && s[i]=='W'){
  ans="NO";
  break;
}
 
 }

}
cout<<ans<<endl;
  }
  }