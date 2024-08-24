#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int len;
        cin >> len;
        vector<int> arr(len);
        for (int i = 0; i < len; i++) {
            cin >> arr[i];
        }

        if (len == 1) {
            cout << arr[0] - 1 << endl;
            continue;
        }

        // Create prefix and suffix maximum arrays
        vector<int> prefixMax(len), suffixMax(len);
        prefixMax[0] = arr[0];
        for (int i = 1; i < len; i++) {
            prefixMax[i] = max(prefixMax[i - 1], arr[i]);
        }

        suffixMax[len - 1] = arr[len - 1];
        for (int i = len - 2; i >= 0; i--) {
            suffixMax[i] = max(suffixMax[i + 1], arr[i]);
        }

       
        int maximin = INT_MAX;
        for (int i = 0; i < len - 1; i++) {
            int maxElement = max(prefixMax[i], suffixMax[i + 1]);
            maximin = min(maximin, maxElement);
        }

        int ans = maximin - 1;
        cout << ans << endl;
    }
    return 0;
}
