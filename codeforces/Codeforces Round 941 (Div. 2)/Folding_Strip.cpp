#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n, mn = 0, mx = 0, cur = 0;
        string s;
        cin >> n >> s;

        for(char c: s){
            if ((cur % 2 == 0) == (c == '1')) {
                cur++;
            } else {
                cur--;
            }

            mn = min(mn, cur);
            mx = max(mx, cur);
        }
        cout << mx - mn << "\n";

    }

    return 0;
}