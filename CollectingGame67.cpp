#include <bits/stdc++.h>
using namespace std;

int main() {
    int nc; 
    cin >> nc;
    while (nc--) {
        int n;
        cin >> n; 
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<int> copyarr = arr;
        vector<int> ans(n, 0);
        vector<long long> prefixsum(n, 0);
        long long sum = 0; // Changed sum to long long to avoid overflow

        for (int i = 0; i < n; i++) {
            sum = sum + arr[i];
            prefixsum[i] = sum;
        }

        ans[n-1] = n-1;
        if (n > 1) {
            for (int i = n-2; i >= 0; i--) {
                if (prefixsum[i] >= arr[i+1]) {
                  mp[arr[i]]=ans[i+1];
                    ans[i] = ans[i+1];
                } else {
                  mp[arr[i]]=i;
                    ans[i] = i;
                }
            }
        }
if( n==1)

{
  cout<<1;
}
else{
        for (int i = 0; i < n; i++) {
           cout<<mp[copyarr[i]]<<" ";
        }
        cout << endl;
    }
    }
    return 0;
}
