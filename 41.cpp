#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int size, k;
        cin >> size >> k;

        int arr[size];
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        string ans = "NO";
        if (k >= size) {
            ans = "YES";
        } 
        else if (k == 1) {
            if (is_sorted(arr, arr + size)) {
                ans = "YES";
            }
        } 
        else {
            ans = "YES";
        }

        cout << ans << endl;
    }

    return 0;
}
