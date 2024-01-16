#include <bits/stdc++.h>
using namespace std;

#define min(a, b) ((a < b)? a : b)

int main()
{
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;

    int ans = d1 + d2 + min(d1+d2, d3);
    ans = min(ans, (d1 << 1) + (d3 << 1));
    ans = min(ans, (d2 << 1) + (d3 << 1));

    cout << ans << "\n";

    return 0;
}