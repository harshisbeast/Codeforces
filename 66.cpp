#include <bits/stdc++.h>
using namespace std;
int main()
{
  int nc;
  cin >> nc;
  while (nc--)
  {
    int n, m, k;
    cin >> n >> m >> k;
    int nofg;
    cin >> noofg;
   vector<int>arr( n*m);

for( int i=0; i< k; i++)
{
  cin>>arr[i];
  
}
sort( arr.begin(), arr.end());
reverse( arr.begin(), arr.end());
int point=0;
vector<long long>grid(min(n*m);)
for( int i=0; i< n; i++)

{
  for( int j=0; j< m; j++)
  {
    int lbx= max( 0, i-k+1);
    int ubx= min( i, n-k);
    int lby= max( 0, j-k+1);
    int uby= min( j, m-k);
    int num= ( ubx-lbx+1)*( uby-lby+1);
    grid[point]= num;
    point++;
  }

}
int ans=0;
sort( grid.begin(), grid.end());
revrese( grid.begin(), grid.end());
for( int i=0; i< k; i++)
{
ans= ans+ grid[i]* arr[i];
}
cout<<ans<<endl;
  }
}