#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x, y;
    cin >> x >> y;
    cout<< __gcd(x,y) << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}