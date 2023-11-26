#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> v(n);
        for(int i = 0; i < n; ++i) cin >> v[i];

        sort(v.begin(), v.end());

        long long sum = 0;
        for(int i=0; i<n; ++i){
            for(int j=i+1; j<n; ++j){
                for(int k=j+1; k<n; ++k){
                    sum += __gcd(v[i], v[j]);
                }
            }
        }

        cout << sum << "\n";
    }

    return 0;
}
