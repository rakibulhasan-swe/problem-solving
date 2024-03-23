#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t; cin >> t;

    while(t--){
        ll n, k, c = 0, sum = 0, maximum = 0, mode = 1000000007;
        cin >> n >> k;

        vector<ll> v(n);
        for(auto &x: v) cin >> x;

        for(int i=0; i<n; i++) {
            c+=v[i];
            sum+=v[i];
            if(c<0) c=0;
            else maximum = max(c, maximum);
        }

        ll ans = sum;
        if(ans > 0) ans+=((pow(2, k)-1)*maximum);

        cout << ans%mode << "\n";

    } 
    

    return 0;
}