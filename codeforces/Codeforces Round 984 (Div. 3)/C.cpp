#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        int q;
        cin >> q;

        set<int> indices;
        for (int i = 0; i <= n - 4; ++i) {
            if (s.substr(i, 4) == "1100") {
                indices.insert(i);
            }
        }

        while (q--) {
            int i, v;
            cin >> i >> v;
            --i;

            s[i] = '0' + v;

            for (int j = max(0, i - 3); j <= min(n - 4, i); ++j) {
                indices.erase(j);
                if (s.substr(j, 4) == "1100") {
                    indices.insert(j);
                }
            }

            if (!indices.empty()) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
