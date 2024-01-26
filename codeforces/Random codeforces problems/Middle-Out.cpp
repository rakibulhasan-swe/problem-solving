#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100 + 3;

int main()
{
    int q;
    cin >> q;

    while(q--) {
        int n;
        char s[MAXN], t[MAXN];

        cin >> n >> s >> t;

        char ss[MAXN], tt[MAXN];

        strcpy(ss, s);
        strcpy(tt, t);

        sort(ss, ss+n);
        sort(tt, tt+n);

        int ans;

        if(strcmp(ss, tt)) {
            ans = -1;
        } else {
            ans = INT_MAX;

            for(int i = 0; i < n; ++i) {
                int ti = i, cnt = 0;

                for(int j = 0; j < n; ++j) {
                    if(t[ti] == s[j]) {
                        ++cnt;
                        ++ti;
                    }
                }

                ans = min(ans, n - cnt);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}