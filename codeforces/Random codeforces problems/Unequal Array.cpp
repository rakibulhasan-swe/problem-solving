#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int prev, curr, mn = -1, mx = -1;
        cin >> prev;

        for (int i = 1; i < n; ++i) {
            cin >> curr;

            if (curr == prev) {
                if (mn == -1) {
                    mn = i;
                }
                mx = i;
            }

            prev = curr;
        }

        int ans = mn == mx ? 0 : max(1, mx - mn - 1);

        cout << ans << "\n";
    }

    return 0;
}