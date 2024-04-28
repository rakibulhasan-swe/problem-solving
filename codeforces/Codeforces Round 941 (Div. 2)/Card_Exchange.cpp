#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> cards(n);
        unordered_map<int, int> ct;

        int ans = n;

        for (int i = 0; i < n; ++i) {
            cin >> cards[i];
            if (ct.find(cards[i]) != ct.end()) {
                ct[cards[i]]++;
            } else {
                ct[cards[i]] = 1;
            }
            if (ct[cards[i]] >= k) {
                ans = k - 1;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}