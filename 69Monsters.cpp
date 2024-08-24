


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nc;
    cin >> nc;
    while (nc--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<pair<int, int>> ans;
        for (int i = 0; i < n; i++)
        {
            ans.push_back({arr[i] % k, i});
        }
//  ab isko sort kardo accordingly to first and last both elements 
    
           sort(monsters.begin(), monsters.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            if (a.first == b.first)
                return a.second < b.second; // Ascending order by index
            return a.first > b.first; // Descending order by hits
        });

        for (int i = 0; i < n; i++)
        {
            cout << ans[i].second+1<< " ";
        }
        cout << endl;
    }
}

