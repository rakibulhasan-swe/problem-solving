#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n, q;
    cin >> n >> q;

    vector<ll>v(n), pre(n, 0);
    ll sm = 0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        sm+=v[i];
    }
    while(q--){
        ll l, r, k;
        cin >> l >> r >> k;
        ll kss = pre[r-1]-(pre[l-1]-v[l-1]);
        ll nsm = sm-kss+(r-l+1)*k;
        if(nsm%2 == 1) cout << "YES\n";
        else cout << "NO\n";
    }

}

int main()
{
    ll t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}
