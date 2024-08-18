#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for(auto &x: v) cin >> x;

        sort(v.rbegin(), v.rend());
        int ans = 0;

        for(int i=0; i<n-1; i+=2){
            ans+=v[i]-v[i+1];
        }
        ans = max(0LL, ans-k);
        if(n%2) ans+=v[n-1];

        cout << ans << "\n";

    }

    return 0;
}