#include<iostream>
using namespace std;
int main()
{
  int nc;
  cin>> nc;
  while( nc--)
  {
    int n ;
    cin>>n;
    int first= n%10;
    n= n/10;
    int second= n%10;
    int ans= first+second;
    cout<<ans<<endl;

  }
}
