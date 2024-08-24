#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int nc;
    cin >> nc;
    while (nc--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int k;
        cin >> k;

        while (k--) {
            string ans = "YES";
            string s;
            cin >> s;

            if (s.length() != n) {
                cout << "NO" << endl;
                continue;
            }

            unordered_map<char, int> mp;  
            unordered_map<int, char> mp2;

            for (int i = 0; i < n; i++) {
                char ch = s[i];
                int num = arr[i];

                if (mp.find(ch) != mp.end()) {
                    
                    if (mp[ch] != num) {
                        ans = "NO";
                        break;
                    }
                } else {
                    mp[ch] = num;
                }

                if (mp2.find(num) != mp2.end()) {
                   
                    if (mp2[num] != ch) {
                        ans = "NO";
                        break;
                    }
                } else {
                    mp2[num] = ch;
                }
            }

            cout << ans << endl;
        }
    }
}
