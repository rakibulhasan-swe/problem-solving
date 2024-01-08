#include <bits/stdc++.h>
using namespace std;


inline bool isEven(int n) { return !(n & 1); }


int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> cnt(n, vector<int>(n, 0));
        int res = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int val;
                cin >> val;

                if (i == 0 || isEven(cnt[i - 1][j])) {
                    res ^= val;

                    if (i - 1 >= 0) ++cnt[i - 1][j];
                    if (i + 1 < n) ++cnt[i + 1][j];
                    if (j - 1 >= 0) ++cnt[i][j - 1];
                    if (j + 1 < n)++cnt[i][j + 1];
                }
            }
        }
        cout << res << "\n";
    }

    return 0;
}