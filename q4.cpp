#include<iostream>
using namespace std;
 int main()
 {
  int n ;
   cin>> n ;
   while(n)
   {
    int noofcell;
    cin>> noofcell;
    int arr[noofcell];
    for( int i =0; i< noofcell; i++)
    {
      cin>> arr[i];
    }
    //  array input ab bas check kardo ki kitne 0 preent hai 
    int count=0;
    for( int i =noofcell-2 ; i>0; i--)
    {
      if( arr[i]==0)
      {
        //  mmatalab ki dikkat hua hai yaha pe 
        count++;
      }
    }
    cout<< count<< endl;
    n--;
   }


 }