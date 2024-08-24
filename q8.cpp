// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// string reverse(string s,int start ,int  end )

// {
// while( start<=end)
// {
//   swap( s[start], s[end]);
//   start++;
//   end--;
// }
// return s;
// }
// int main()
// {
// int noofcases;
// cin>>noofcases;
// while( noofcases)
// {
//   int operations;
//   cin>> operations;
//   string s;
//   cin>>s;
//   int n=s.length();
// char a = s[0];
// char b = s[n-1];
// string ans="";
// string reversed=reverse( s, 0 , n-1);
// if(a>b )
// {
//   //  matlab pehla element greater h (z a)
//   //  revrese toh ek baar karna hi padega 
   
//    operations--;
//    if( operations%2==0)
//    {
//     ans = reversed;
//    }
//    else{
//     ans = ans+reversed+s;
//    }
// }
// else{
//   if( operations%2==0)
//   {
//     ans = s;
//   }
//   else{
//     ans =s+ reversed;
//   }
// }
// cout<< ans<< endl;
// noofcases--;

// }
// }


#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
   int noofcases ;
   cin>>noofcases;
   while( noofcases)
   {
    string s;
    int n ; 
    cin>> n; 
    cin>>s;
    string news= s;
    reverse( s.begin(), s.end());
    cout<< min( s, s+news)<< endl;
    noofcases--;
   }
}