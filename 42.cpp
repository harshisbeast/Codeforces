#include<iostream>
using namespace std;
#include<algorithm>

int main()
{
  int nc;
  cin>> nc;
  while( nc--)
  {
    int n ,x;
    cin>> n >> x;
    int arr[ n];
    for( int i=0; i< n ;i++)
    {
      cin>>arr[i];
    }
    sort( arr, arr+n);
    int start=0;
    int maxi= arr[0]- start;
    for(int i=0; i< n-1; i++)
    {
      int diff= abs( arr[i]- arr[i+1]);
      maxi = max( maxi, diff);
    }
maxi = max( maxi, 2*(x-arr[n-1]));
cout<< maxi <<endl;

  }
}
