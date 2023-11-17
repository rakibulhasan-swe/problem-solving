#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool hasSameParity(ll a, ll b) {
    return (a % 2 == 0 && b % 2 == 0) || (a % 2 != 0 && b % 2 != 0);
}

ll maxSubArraySum(const vector<ll>& arr, ll n) {
    ll maxEndingHere = arr[0];
    ll maxSoFar = arr[0];

    for (ll i=1; i<n; ++i) {
        if(i > 0 && hasSameParity(arr[i - 1], arr[i])){
            maxEndingHere = arr[i];
            maxSoFar = max(maxSoFar, maxEndingHere);
            continue;
        }else{
            maxEndingHere = max(arr[i], maxEndingHere + arr[i]);
            maxSoFar = max(maxSoFar, maxEndingHere);
        }
    }

    return maxSoFar;
}

int main() {
    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        vector<ll> v(n);
        for (ll i = 0; i < n; ++i)
            cin >> v[i];

        ll res = maxSubArraySum(v, n);

        cout << res << "\n";
    }

    return 0;
}
