#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
  int nc;
  cin >> nc;
  while (nc--)
  {
    int n;
    cin >> n;
    int arr[n];
    int even = 0, odd = 0;
    int maxeven0, maxodd = 0;
    vector<int> evenlist;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      if (arr[i] % 2 == 0)
      {
        even++;
        evenlist.push_back(arr[i]);
      }
      else
      {
        odd++;
        maxodd = max(maxodd, arr[i]);
      }
    }
    int ans;
    int size = evenlist.size();
    sort(arr, arr + size);

    if (size == 0 || odd == 0)
    {
      ans = 0;
    }
    else
    {
      int flag = 0;
      int biggestev = evenlist[size - 1];
      if (maxodd > biggestev)
      {
        ans = even;
      }
      else
      {
        //   cout<<maxodd<<" "<<biggestev<<endl;
        for (int i = 0; i < size - 1; i++)
        {
          if (evenlist[i] > maxodd)
          {
            flag = 1;
          }
          else
          {
            maxodd = max(maxodd, maxodd + evenlist[i]);
          }
        }
        if (flag == 1 || maxodd < biggestev)
        {
          ans = 1 + even;
        }
        else
        {
          ans = even;
        }
      }
    }
    cout<< ans<< endl;
  }
}