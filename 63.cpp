#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int nc;
  cin>>nc; 
  while( nc--)
  {
int n;
cin>>n;
int arr[n];
 
 for( int i=0; i< n; i++)
 {
  cin>>arr[i];

 }


 vector<int>visited(n, -1);
 string ans="YES";
 int start=arr[0];
 visited[start]=1;
 for( int i=1;i<n; i++)
 {
  int curr= arr[i];
  

if( curr=n)
{
  if( visited[curr-1]==1)
  {
    visited[curr]=1;
  }
else{
  break;
}
}
else if( curr==1)
{
  if(visited[curr+1]==1)
  {
    visited[curr]=1;
  }
  else{
    break;
  }
}


  else if( visited[curr-1]==1 || visited[curr+1]==1)
  // {
  //   visited[curr]=1;
    
  // }
  else{
    ans="NO";
    break;

  }
 }
 cout<< ans<< endl;
 
  }
}