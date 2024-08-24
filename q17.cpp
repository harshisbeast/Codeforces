#include<iostream>
using namespace std;
int main()
{
  int noofcase;
  cin>> noofcase;
  while( noofcase)
  {
string s;
cin>>s;
char m1=s[4];
char m2=s[3];
  int val1 = s[0] - '0'; 
        int val2 = s[1] - '0';
int ans= 10*val1+val2;
string clock;
if( ans%12>0)
{
  int divisor=ans%12;
  if( divisor>9)
  {
    clock = to_string(divisor);
            } else {
                clock = "0" + to_string(divisor); // Concatenate strings correctly
            }
        } else {
            clock = to_string(ans);
string final= clock +':'+m2+m1;
cout<< final<< endl;


    noofcase--;
  }
}