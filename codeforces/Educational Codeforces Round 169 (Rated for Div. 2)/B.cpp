#include<bits/stdc++.h>
using namespace std;

void solve(){
    int l, r, L, R;
    cin >> l >> r >> L >> R;

    int low = max(l, L);
    int high = min(r, R);

    if(low>high){
        cout << "1\n";
        return;
    }

    int ans = high-low;

    if(min(l, L)<low) ans++;
    if(max(r, R)>high) ans++;

    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}