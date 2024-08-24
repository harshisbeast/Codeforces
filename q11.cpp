#include<iostream>
using namespace std;
int main(){
  int noofcases;
  cin>>noofcases;
  while( noofcases)
  {
int intro,extro, unive;
cin>>intro>>extro>>unive;
int ans =0;
ans = ans+intro;
ans= ans+ (extro/3);
int mod= extro%3;
if( mod==0)
{
  //  sirf universal k saath kheln ahia 
  ans = ans+ (unive)/3;
  if(unive%3!=0)
  {
    ans = ans+1;
  }
}
else if(mod!=0 && unive+mod<3)
{
  ans=-1;
}
else if( mod!=0 && unive+mod>=3)
{
  unive= unive+mod;
  ans= ans+ (unive/3);
  if( unive%3!=0)
  {
    ans= ans+1;
  }
}
cout<< ans<<endl;





    noofcases--;
  }
}
