#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    map<int, int> mp;

    for (auto &x : v){
        cin >> x;
        mp[x]++;
    }

    if (mp.size() == 1){
        cout << "-1\n";
        return;
    }
    int a = v[0], idx = 0, res = n;
    for (int i = 0; i < n; i++){
        if (v[0] == v[i]){
            idx++;
        }
        else{
            res = min(res, idx);
            idx = 0;
        }
    }
    res = min(res, idx);
    cout << res << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}