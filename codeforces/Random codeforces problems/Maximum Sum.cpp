#include <bits/stdc++.h>
using namespace std;

#define LL long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n + 1);
        vector<LL> prefixSum(n);

        for (int i = 1; i <= n; ++i) {
            prefixSum[i] = prefixSum[i - 1] + a[i];
        }

        LL ans = 0;

        for (int m = 0; m <= k; ++m) {
            ans = max(ans, (prefixSum[n - (k - m)] - prefixSum[2 * m]));
        }

        printf("%lld\n", ans);
    }

    return 0;
}