#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

const int MAXN = 2e5 + 3;
int a[MAXN];


int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;

        for(int i = 0; i < n; ++i) scanf("%d", a+i);

        sort(a, a+n);
        LL ans = 0;

        for(int i = 0; i < n; ++i) {
            int* lb = lower_bound(a+i+1, a+n, l - a[i]);
            int* ub = upper_bound(a+i+1, a+n, r - a[i]);
            ans += ub - lb;
        }

        cout << ans << "\n";
    }
    

    return 0;
}