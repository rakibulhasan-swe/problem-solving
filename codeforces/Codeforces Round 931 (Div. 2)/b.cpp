#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        int target;
        cin >> target;

        vector<int> coin = {15, 10, 6, 3, 1};

        int coin_cnt = 0;
        for (int i = 0; i < coin.size(); i++) {
            coin_cnt += target / coin[i];
            target %= coin[i];
        }

        cout << coin_cnt << "\n";
    }

    return 0;
}
