//https://codeforces.com/problemset/problem/151/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    cout << min(min(k * l / nl, c * d), p / np) / n  << "\n";

    return 0;
}
