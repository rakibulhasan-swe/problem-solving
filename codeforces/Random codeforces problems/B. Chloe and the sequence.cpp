#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll k;
    scanf("%*d %I64d", &k);

    ll mid, diff;

    do {
        mid = 1ll << int(log2(k));
        diff = k - mid;
        k = mid - diff;
    }while(diff);

    ll ans = int(log2(mid)) + 1;

    printf("%I64d\n", ans);

    return 0;
}