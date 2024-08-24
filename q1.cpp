#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int n ;
  cin>> n;
  int length;
  // cin>>length;
  // . khali, @ coins * denotes thorns
int ans =0;
while( n)
{
  cin>>length;
  vector<char>arr(length);
  for( int i =0; i<length; i++)
  {
    cin>>arr[i];
  }
  //  arrayinput le liye hai 
  for( int i=0 ; i< length-1;i++)
  {
   if( arr[i+1]=='@')
   {
    ans++;
   }
   else if( i+2<=length-1&&
    arr[i+1]=='*'&& arr[i+2]=='*')
    {
      //  matlab ki 2 lagatar thhorn hai and usko paar nhi kar sakte hai 
      break;
    }
  }
  cout<<ans<< endl;
n--;

}

}
