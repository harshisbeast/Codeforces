#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int nofcase;
    cin >> nofcase;
    while (nofcase--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int newarr[n - 1];
        int gcd[n - 1];
        for (int i = 0; i < n - 1; i++) {
            int ele1 = arr[i];
            int ele2 = arr[i + 1];
            int mini = min(ele1, ele2);
            int maxi = 1;
            for (int j = 1; j <= mini; j++) {  // Changed loop variable to 'j'
                if (ele1 % j == 0 && ele2 % j == 0) {
                    maxi = j;
                }
            }
            gcd[i] = maxi;
            newarr[i] = maxi;
        }
        sort(newarr, newarr + n - 1);
        int count = 0;
        for (int i = 0; i < n - 1; i++) {  // Corrected loop range
            if (gcd[i] != newarr[i]) {
                count++;
            }
        }
        if (count > 2) {
            cout << "NO";
        } else {
            cout << "YES";
        }
        cout << endl;
    }
    return 0;
}
