#include <bits/stdc++.h>
using namespace std;

#define ll long long

int solve(vector<ll>& A, ll N, ll K) {
    ll count = 0;
    ll oddCount = 0;

    for(ll i=0; i<K; ++i) {
        if (A[i]%2 != 0)
            oddCount++;
    }

    if(oddCount>0)
        count++;

    for(ll i=K; i<N; ++i) {
        if (A[i-K]%2 != 0)
            oddCount--;

        if(A[i]%2 != 0)
            oddCount++;

        if(oddCount>0)
            count++;
    }

    return count;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;

        vector<ll> v(n);
        for (ll i=0; i<n; ++i) {
            cin >> v[i];
        }

        ll result = solve(v, n, k);
        cout << result << "\n";
    }

    return 0;
}
