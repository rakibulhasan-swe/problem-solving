#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int a, b, l;
    cin >> a >> b >> l;

    int loop_s = (int)(log(l) / log(a));
    int loop_e = (int)(log(l) / log(b));

    set<int> s;

    for (int i=0; i<=loop_s+1; ++i) {
        for (int j=0; j<=loop_e+1; ++j) {
            int a_new = pow(a, i);
            int b_new = pow(b, j);

            int prod = a_new * b_new;
            if (l>=prod && l%prod==0) s.insert(prod);
        }
    }
    cout << s.size() << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
