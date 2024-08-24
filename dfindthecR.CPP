#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int n ;
  cin>> n;
  while( n--)
  {
    int finaldes, k , q;
    cin>>finaldes>>k>>q;
     vector<int>arraya(k);
     vector<int>arrayb(k);
     vector<int>query(q);
     vector<int>ans(k);
     for( int i=0; i<k ;i++)
     {
      cin>>arraya[i];
     }
     for( int i=0; i<k;i++)
     {
      cin>>arrayb[i];
     }
     for( int i=0; i<q; i++)
     {
      cin>>query[i];
     }
     int run=0;
     for(int i=0; i< k; i++)
     {
      int dis, play;
      if( i==0)
      {
         dis= arraya[0];
         play=arrayb[0];
        }
        else{
           dis= arraya[i]-arraya[i-1];
           play= arrayb[i]-arrayb[i-1];
        }
  int speed= (dis/play);
  for( int i=0; i<play; i++)
  {
    ans[run]=speed;
    run++;
  }

     }
for(int i=0; i<q; i++)
{
  cout<<ans[query[i]]<<" ";
}
cout<<endl;
  }
}