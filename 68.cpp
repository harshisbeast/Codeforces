#include<bits/stdc++.h>
using namespace std;
int main()
{
  int nc;
  cin>> nc;
   while( nc--)

   {
    int n;
     int arr[n+1];
     int ans=0;
      if( n%2==0)
      {
      
      ans=-1;
      }
      else{
//  bich mei smallest elkement dalo right mei next lement left mei 3rd elemet ans hoi ga 

int mid= (n+1)/2;
arr[mid]=1;
leftmid= mid-1;
rightmid= mid+1;
int flag=0;
int val=2;
//  0 ka mtlb right move karenge 
while( leftmid>=0 ||  rightmid<=n)
{
  if( flag==0)
  {
    arr[rightmid]=val;
    val++;
    rightmid++;
    flag=1;
  }
  else{
    arr[leftmid]=val;
    val++;
    leftmid--;
    flag=0;
  }

}



for( int i=1; i<=n; i++)
{
  cout<< arr[i]<<" ";
}



      }
      cout<< endl;
   }
}