
#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;

    while(t--){
        ll n, x;
        cin >> n >> x;
        vector<ll> v(n);

        for(ll i=0; i<n; i++) cin >> v[i];

        vector<ll> result;
        result.push_back(0);
        result.insert(result.end(), v.begin(), v.end());
        result.push_back(x);

        int max_diff = 0;
        for (ll i = 1; i < result.size(); ++i) {
            int diff = result[i] - result[i - 1];
            if (diff > max_diff) {
                max_diff = diff;
            }
        }
        ll res = max_diff;
        ll last_diff = result[result.size()-1] - result[result.size()-2];

        if((2*last_diff) >= max_diff) cout << (2*last_diff) << "\n";
        else cout << max_diff << "\n";

    }

    return 0;
}