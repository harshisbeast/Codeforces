#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int nofcases;
  cin>> nofcases;
  while( nofcases)
  {
    int left, right, target ;
    cin>> left ;
    cin>> right;
    cin>> target ;
    vector<int> rr;
    vector< int> ll;
    for( int i =0 ; i< left ; i++)
    {
      cin>> ll[i];
    }
    for( int i =0 ; i< right; i++)
    {
      cin>> rr[i];
    }
     int count =0 ; 
    for( int i =0 ; i<  left ; i++)
    {
      int sum =0 ;
       for( int j =0 ; j< right; j++)
       {
        sum = sum+ ll[i]+ rr[j];
        if(sum<= target )
        {
            count++;
        }
       }
    }
    cout<< count<< endl ;
    nofcases--;
    
  }
}
