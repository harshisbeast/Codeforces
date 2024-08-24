
#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int nofcases;
  cin>> nofcases;
  while(nofcases)
  {
    int start, end;
    vector<int>a(start);
    vector<int>b(start);
    for( int i=1; i< start; i++)
    {
      cin>>a[i];
    }
   for( int i=1; i< start; i++)
    {
      cin>>b[i];
    }
    int ans =a[end];
    for( int i =start; i>end; i--)
    {
      int val= min(a[i], b[i]);
      ans = ans+ val;
    }
    cout<< ans<< endl;
    nofcases--;
  }

}