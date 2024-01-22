#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
vector<int> V, V2;

int main()
{
    int n, x, k;
    cin >> n >> x >> k;

    int a;

    for(int i = 0; i < n; ++i) {
        cin >> a;
        V.push_back(a);
    }

    sort(V.begin(), V.end());

    for(auto &a : V)
        V2.push_back(a / x);

    LL ans = 0;

    for(int i = 0; i < n; ++i) {
        int kk = V2[i] + k - (V[i] % x == 0);
        int adv = lower_bound(V.begin(), V.end(), V[i]) - V.begin();
        ans += upper_bound(V2.begin()+adv, V2.end(), kk) - lower_bound(V2.begin()+adv, V2.end(), kk);
    }

    cout << ans << "\n";

    return 0;
}