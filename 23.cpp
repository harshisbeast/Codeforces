#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 
    while (n) {
        int x, y;
        cin >> x >> y;
        int ans = 0;
        int remaining;
if( y==0)
{
  if( x<=15)
  {
    ans= ans+1;
  }
  else{
  ans= x/15;
  if( x%15!=0)
  {
    ans= ans+1;
  }
  }
}
else{
  int boxes=y/2;

  if( y%2==1)
  {
    boxes=boxes+1;
  }
  int remaining=15*boxes-4*y;
  if( x<=remaining)
  {
    ans= boxes;
  }
  else{
    x= x-remaining;
    ans= ans+(x/15);
    if( x%15!=0)
    {
      ans= ans+1;
    }
  }


}

        // Output the result
        cout << ans << endl;

        
        n--;
    }

    return 0;
}
