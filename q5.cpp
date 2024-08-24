#include<iostream>
using namespace std;
int main(){
  int noofcases;
  cin>> noofcases;
  while( noofcases)
  {
    int n; 
    //  size of array 
    cin>> n ;
    int sum=0;
    int arr[n]; 
    for( int i =0 ; i< n ; i++)
    {
      cin>> arr[i];
      sum= sum+ abs( arr[i]);

    }
cout<< sum<< endl;
noofcases--;

  }
}