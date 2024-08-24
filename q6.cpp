#include<iostream>
using namespace std;
// void solve( int arr[], int &sum , int count, int ind, int n )
// {
  
//   if( ind>=n)
//   {
//     return ;
//   }
//   int include= solve(arr, sum+arr[ind],count+1, ind+1, n);
//   if( sum%3==0)
//   {
//     return ;
//   }
//   int exclude= solve( )

// }
int main()
{
  int noofcases;
  cin>> noofcases;
while( noofcases)
{
int n ;
cin>> n ;
int arr[n];
int sum=0;
//  no of cases
for( int i =0 ; i< n ; i++)
{
  cin>> arr[i];
sum = sum+arr[i];
}
// int count= 0; 

// int 
int rema[n];
for( int i=0; i< n ;i++)
{
rema[i]= arr[i]%3;
}

int count =0;
if( sum%3==0)
{
  count=0;
}
else if( sum%3==1)
{
  //  matlab ek remainder hai  agar 
for( int i=0 ;i< n; i++ )
{
   if( rema[i]==1)
   {
    count= 1;
    break;
   }
   else { count =2;
   }
}
}
else if( sum%3==2)
{
  count =1;
}
cout<< count<< endl ;
noofcases--;


}

  

}