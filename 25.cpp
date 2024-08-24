#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int n ;
  cin>> n;
   while( n )
   {
    int size ;
    cin>>size;
    vector<int> arr;
    for( int i=0; i< n ; i++)
    {
      cin>>arr[i];
    }
    vector<vector<int>> val(size-2, vector<int>(3));

    int ans=0;
    if( size<=3)
    {
      ans= 0;
    }




    else{
    for(int i=0 ;i<size-3; i++)
    {
      for( int j=0;j< 3; j++)
      {
      val.push_back({arr[i]});
    }
    }
int m= val.size();
for( int i=0; i< m-1;i++)
{
  for( int j=i+1; j< m; j++)
  {
    int k=0;
    if( (val[i][k]!=val[j][k]&& val[i][k+1]==val[j][k+1] && val[i][k+2]== val[j][k+2])   
    ||val[i][k]==val[j][k]&& val[i][k+1]!=val[j][k+1] && val[i][k+2]== val[j][k+2] 
    || val[i][k]==val[j][k]&& val[i][k+1]==val[j][k+1] && val[i][k+2]!= val[j][k+2]
    )
    {
      ans++;
    }
  }
}





    }
   cout<<ans<<endl;
   n--;
}
}