#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int n ;
cin>>n;
while( n)
{
int len,ind, k;
cin>>len>>ind>>k;
int arr[len];
for( int i=0; i< len ; i++)
{
  cin>>arr[i];
}
int fav= arr[ind];
sort(arr, arr+len);
reverse(arr, arr+n);
int val=0;
for( int i=0; i<k ; i++)
{
val=arr[i];
}
if( k==len)
{
  cout<<"NO";
}
else if( val==fav)
{
  cout<<"MAYBE";
}
else if (val>fav)
{
  cout<<"NO";
}
else{
  cout<<"YES";
}
cout<<endl;

  n--;
}
}