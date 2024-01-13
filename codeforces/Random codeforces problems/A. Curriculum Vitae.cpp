#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100 + 3;

int main()
{
    int n;
    cin >> n;

    int val, zeroCnt[MAXN] = {0};

    for(int i = 1; i <= n; ++i) {
        cin >> val;
        zeroCnt[i] = zeroCnt[i-1] + (val == 0);
    }

    int ans = 0;

    for(int i = 1; i <= n; ++i) {
        int leftZeroCnt = zeroCnt[i-1];
        int rightOneCnt = (n - i) - (zeroCnt[n] - zeroCnt[i]);
        ans = max(ans, leftZeroCnt + 1 + rightOneCnt);
    }

    cout << ans << "\n";

    return 0;
}