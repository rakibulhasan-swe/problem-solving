#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a1, ax, an;
        bool isSorted = true;

        cin >> a1;
        if(a1 != 1) isSorted = false;

        for(int i = 2; i < n; ++i) {
            cin >> ax;
            if(ax != i) isSorted = false;
        }

        cin >> an;
        if(an != n) isSorted = false;

        int ans;

        if(isSorted) {
            ans = 0;
        } else if(a1 == 1 || an == n) {
            ans = 1;
        } else if(a1 == n && an == 1) {
            ans = 3;
        } else {
            ans = 2;
        }

        cout << ans << "\n";
    }

    return 0;
}