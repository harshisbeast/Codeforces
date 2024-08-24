#include<iostream>
using namespace std;
int main()
{
  int k;
  cin>>k;
  while(k--)
  {
    string a, b;
    cin>>a>>b;
    char ch1=a[0];
    char ch2= b[0];
    a[0]=ch2;
    b[0]=ch1;
    cout<<a<<" "<<b<<endl;
  }
}