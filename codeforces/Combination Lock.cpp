#include <bits\stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    string a, b;
    cin >> n >> a >> b;
    int ans = 0;

    for(int i = 0; i < n; i++)
        ans += min(10 - abs(a[i] - b[i]), abs(a[i] - b[i]));

    cout << ans << "\n";

    return 0;
}
