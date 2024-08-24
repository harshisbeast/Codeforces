#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
  int arr[5]={ 7 , 1, 1, 2, 3};
  //  1 2 3 7 

 sort( arr , arr+5);
//   1 1 2 3 7
 int brr[];
 int k=0;
 for( int i=0 ;i< n-1; i++)
 {
  if( arr[i]==arr[i+1])
  {
    continue;
  }
  else{
    brr[k]= arr[i];

    //  bvrr[0]=1
    // brr[1]=2
    // brr[2]=3

// k=3
    k++;

  }
 }
 if( arr[n-1]!=arr[n-2])
 {
  brr[k]= arr[n-1];
 }
}