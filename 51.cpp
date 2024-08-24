#include <iostream>
#include <queue>
using namespace std;

int main() {
    int nc;
    cin >> nc;
    
    while (nc--) {
        int n;
        cin >> n;
        int arr[n];
        priority_queue<int> maxprio; // Max priority queue
        priority_queue<int, vector<int>, greater<int>> minprio; // Min priority queue
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] % 2 == 0) {
                maxprio.push(arr[i]);
            } else {
                minprio.push(arr[i]);
            }
        }
        
        int ans= 0;
        while (minprio.size() != 0 || maxprio.size() != 0) {
          
            
            if (maxprio.size() != 0) {
                topo = maxprio.top();
                maxprio.pop();
            }
            
            if (minprio.size() != 0) {
                tope = minprio.top();
                minprio.pop();
            }
            
            sum = topo + tope;
            maxprio.push(sum);
            ans++;
        }
        
        cout << ans << endl;    
    }
    
    
}
