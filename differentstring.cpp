#include <iostream>
#include <unordered_map>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        unordered_map<char, int> mp;
        int n = s.length();
        int count = 0;
        
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
            if (mp[s[i]] == 1) {
                count++;
                if (count > 1 && s[i] != s[i - 1]) {
                    swap(s[i - 1], s[i]);
                    break;  
                }
            }
        }
 
        if (count <= 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES " << s << endl;
        }
    }
    return 0;
}