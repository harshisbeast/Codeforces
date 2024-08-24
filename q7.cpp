#include<iostream>
using namespace std;
int main()
{
  int noofcases;
  cin>> noofcases;
  while (noofcases)
  {
    int n ; cin>> n;
    int arr[n];
    for( int i =0 ;i< n ; i++ )
{
  cin>> arr[i];
}
int maxi =0;
for( int i =0 ; i<= n-4;)
{
  int sum =0;
  for( int j =i  ; j< i+4; j++)
  {
    for( int k =j ; k< j+4 ; k++ )
    {
      sum= sum+ abs( arr[j]- arr[k]);
    }
    if( sum> maxi )
    {
      maxi = sum;
    }
  }
}

    cout<< maxi << endl;
    noofcases--;
  }
  
}
