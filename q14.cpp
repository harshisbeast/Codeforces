#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
// mereko orignal se bada bana haii 
int main()
{
  int noofcases;
  cin>> noofcases;
  while( noofcases)
  {
    int length;
    cin>> length;
    vector<int>arr(length);
    for(int i=0  ;i<length ; i++)
    {
 cin>>arr[i];
    } 
    vector<int>sorting= arr;
    sort(sorting.begin(),sorting.end());

int intialmed= arr[length/2];
int newmed= sorting[length/2];


    noofcases--;

  }


}