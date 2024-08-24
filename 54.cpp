#include<iostream>
using namespace sytd;
int main()
{

    int nc;
    cin>>nc;
      while( nc--)
{
    int a, b , c , d;
    cin>>a>>b>>c>>d;
int ans=0;
 if( a>=c && b>d ||(a>c&&b>=d ))
 {
    ans= ans+2;
 }
 if( a>=d &&  b>c || (a>d&& b>=c ))
 {
 ans= ans+2;
 }
cout<< ans<<endl;
}

}