// #include<iostream>
#include<bits.stdc++.h>
using namespace std;
int main()
{
  int nc; cin>>nc;
while( nc--)
{
  int n;
  cin>>n;
int king;
cin>>king;
vectorint> shares(n);
vector<int>prices( n);
for( int i=0; i< n; i++)
{
  cin>>shares[i];
}
for( int i=0; i<n;i++)
{
  cin>>prices[i];
}
vector<pair<int , int>>pairs;
for( int i=0; i< n;i++)
{
  pairs.push_back( {prices[i], shares[i]});

}
int cost= king;
int peoples=1;
int i=0;
sort( pairs.begin(), pairs.end());
while( people<n)
{

// agara mera cost king k cost se jyada hua toh king hi bheje wo chwezz
int prices= pairs[i].first;
int num= pairs[i].second;
if( prices<king)
{
  cost= cost+  (prices*num);
  people= people+ num;
i++;
}
else{
cost= cost+  king*( n-people);
people=n; 
}


}
cout<<ans<<endl;
}

}