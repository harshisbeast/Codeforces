
 #include< vector>
  #include<iostream>
using namespace std;
int main()
{
  int nc; 
  cin>> nc;
  while( nc--)
  {
    int n;
    cin>> n;
    string s;
    for( int i=1; i<= n ; i++ )
    {
      
     
       cin>> s[i];
      
    }
    vector<int> openv, closev;

int open=0, close=0;
for( int i=1; i<= n; i++)
{
  if( i%2!=0)
  {
    if( open> close)
    {
      s[i]=')';
closev.push_back(i);
    }
    else{
      s[i]='(';
      openv.push_back(i);
    }
    
  }
  else{
    if( s[i]=='(')
    {
      openv.push_back(i);
    }
    else{
      closev.push_back(i);

    }
  }
}

int ans=0;
for( int i=0 ;i< n/2; i++)
{
  ans= closev[i]- openv[i]+ans;
}
cout<<ans<< endl;
  }
}