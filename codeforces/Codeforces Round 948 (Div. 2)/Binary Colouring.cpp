#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        int x;
        cin >> x;
        
        vector<int> v;
        int i = 0;
        
        while (x) {
            if (x & 1) {
                if ((x & 2) && i < 31) {
                    v.push_back(-1);
                    x = (x >> 1) + 1;
                } else {
                    v.push_back(1);
                    x >>= 1;
                }
            } else {
                v.push_back(0);
                x >>= 1;
            }
            i++;
        }
        
        cout << v.size() << "\n";
        for (auto x: v)
            cout << x << " ";
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
