#include <iostream>
using namespace std;
int main()
{
  int nc;
  cin >> nc;
  while (nc--)
  {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    string s;
    cin >> s;
    vector<int> prefixsum(n + 1, 0);
    int points = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
      int sum = sum + arr[i];
      prefixsum[points] = sum;
      points++;
    }
    int lf = -1;
    int rp = -1;
    //   last left find karlo
    
for( int i=0; i< n; i++)
{
  if( s[i]=='L')

{
lf=i;
break;
}

}
for( int i=n-1;i>=0;i--)
{
  if( s[i]=='R')
  {
    rf=i;
    break;
  }
}
int ans;
if( lf>rf)
{
 cout<<0<<endl;
}
else{
int sum=0;
while( l<n && r>=0)
{

if( s[lf]=='L' && s[rf]=='R')
{
  sum=prefixsum[rf]+ prefixsum[lf-1];
lf++;
rf--;
}
if( s[lf]!='L')
{
  lf++;
}
if( s[rf]!='R')

{
  r--;
}
}
cout<< sum<<endl;
}



    
  }
}