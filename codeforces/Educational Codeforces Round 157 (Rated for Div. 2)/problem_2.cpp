#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n*2);
        for(int i=0; i<n*2; i++)
            cin >> v[i];

        sort(v.begin(), v.end());
        int res = 0;
        for(int i=0; n+i+1<2*n; i++){
            res += abs(v[i+1]-v[i]) + abs(v[n+i+1]-v[n+i]);
        }
        cout << res << "\n";

        for(int i=0; i<n; i++) {
            cout << v[i] << " " << v[n*2-i-1] << "\n";
        }
    }

    return 0;
}
