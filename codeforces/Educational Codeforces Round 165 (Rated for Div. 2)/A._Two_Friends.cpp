#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        int n;
        cin >> n;

        vector<int> v(n);
        for(auto &x: v) cin >> x;

        int ans = 3;
        for(int i=0; i<n; i++){
            if(v[v[i]-1] == i+1) ans = 2;
        }

        cout << ans << "\n";
    }

    return 0;
}