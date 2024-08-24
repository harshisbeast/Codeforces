#include<bits/stdc++.h>
using namespace std;
int main()
{
  int nc;
  cin>> nc;
  while( nc--){
    int n;
    cin>>n;
     int arr[n];
     unordered_map<int , int>mp;
     int maxi=0;
     for( int i=0; i< n; i++)
     {
      cin>> arr[i];
     }
     for( int i=0; i< n; i++)
     {
      mp[ arr[i]]++;
      maxi = max( maxi , mp[arr[i]]);
     }
    //   maine konsa element max number of imes aaaya hai wo find kar liya hai 

int ans= n- maxi;
cout<< maxi<< endl;




  }
}