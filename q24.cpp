#include<iostream>
#include<unordered_map>
using namespace std;
int  main()
{
int  n ; cin>>n; 
while(n)
{
int size;
string s;
cin>>size;
cin>>s;
string r;
unordered_map<char, int> mp;
for( int i=0; i< size; i++)
{
  if(mp[s[i]]==0)
  {
    r=r+s[i];
  }
  mp[s[i]]++;
}
int rsize=r.size()-1;
for( int i=0; i< n; i++)
{
  char ch = s[i];
  int j=0; int val=0;
  while( ch!=r[j])
  {
    j++;
    val++;
  }
  char new1= r[rsize-val];
  s[i]=new1;


}
cout<<s<<endl;
}
}