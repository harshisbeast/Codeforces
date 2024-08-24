#include<iostream>
using namespace std;
int main();
{
int a=1,b=1;
for( int i=2; i< 6; i++)
{
  int val= a+b;
  a= b; 
  b= val;

}
cout<<a+b;
}