#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t; cin >> t;

    while(t--){
        ll n, k, answer = 0, cur = 0, MOD = 1000000007;
        cin >> n >> k;

        vector<ll> v(n);
        for(auto &x: v) cin >> x;

        for(auto x: v) {
            cur+=x;
            answer = max(answer, cur);
            cur = max(cur, 0ll);
        }

        ll res = (accumulate(v.begin(), v.end(), (ll)0) % MOD + MOD)%MOD;

        for(int i=0; i<k; i++){
            res = (res+answer) % MOD;
            answer = (answer*2)%MOD;
        }

        cout << res << "\n";
    }
    

    return 0;
}