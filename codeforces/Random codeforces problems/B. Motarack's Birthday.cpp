#include <bits/stdc++.h>
using namespace std;

const int INF = INT_MAX;

int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int mn = INF, mx = -INF, diff = 0;
        int curr, prev;

        cin >> prev;

        for(int i = 1; i < n; ++i) {
            cin >> curr;

            if(curr == -1) {
                if(prev != -1) {
                    mn = min(mn, prev);
                    mx = max(mx, prev);
                }
            } else {
                if(prev == -1) {
                    mn = min(mn, curr);
                    mx = max(mx, curr);
                } else {
                    diff = max(diff, abs(curr - prev));
                }
            }

            prev = curr;
        }

        int k = (mx + mn) / 2;
        diff = max(diff, mx-k);

        cout << diff << " " << k << "\n";
    }

}