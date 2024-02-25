#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n, k;
        cin >> n >> k;

        vector<int> health(n);
        vector<int> position(n);
        
        for (int i=0; i<n; ++i) cin >> health[i];

        vector<int> toRight(n+1, 0);
        for (int i=0; i<n; ++i){
            cin >> position[i];
            toRight[abs(position[i])]+=health[i];
        }
        
        int p = k;
        for (int i=1; i<=n; ++i) { 
            if (p<toRight[i]) {
                cout << "NO\n";
                return;
            }
            p-=toRight[i];
            p+=k;
        }
        cout << "YES\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--) {
        solve();
    }
}
