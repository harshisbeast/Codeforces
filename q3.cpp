#include<iostream> 
#include<vector>
using namespace std;
 int main()
 {
int noofcases;
cin>> noofcases;
while( noofcases)
{
  int n , divider ;
  cin>> n;
  cin>>divider;
  int i =0 ; 
  int j= n-1;
  //  n and m ko inputr mei le liya
  int stringval=0;
  string s;
  cin>>s;
  int arr[n];
  for( int t=0; t< n ; t++)
  {
    cin>>arr[t];
  }
   while( i<=j)
   {
    int multiply=1;
    for( int val =i; val<= j; val++)
    {
      multiply= multiply*arr[i];
    }
    if( s[stringval]=='L')
    {
      //  left side se remove karo
      i++;
    }
    else{
       j--;
    }
    stringval++;
    int ans;
    ans = multiply%divider;
    cout<< ans;
   }
   cout<< endl;

}
 }