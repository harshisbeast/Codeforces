#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int nc;
  cin>.nc;
  while( nc--)
  {
    int n;
    cin>>n;
    int arr[n];
    vector< int>even;
    int evenmax=0;
int oddmax=0;
    for( int i=0; i< n; i++)
    {
      cin>> arr[i];
      if( arr[i]%2==0)
      {
        even.push_back( arr[i]);
      evenmax= max(arr[i],evenmax);
      }
      else{
        oddmax= max( oddmax, arr[i]);
      }
      
    }
    int ans= even;
    if( oddmax>evenmax)
    {
      ans= even.size();
    }
    else{
      
      for( int i=0; i<even.size(); i++)
      {
        if( even[i]> oddmax)
        {
          ans++;
          break;
        }
        oddmax= oddmax+even[i];

      }
    }
 cout<< ans<< endl; 

  }
}