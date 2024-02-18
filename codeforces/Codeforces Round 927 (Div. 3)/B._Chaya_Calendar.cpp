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
        for(int i=0; i<n; i++) cin >> v[i];

        int ans = 0;
        for(int i=0; i<n; i++){
            if(v[i]>ans) ans = v[i];
            else ans = (ans/v[i]+1)*v[i];
        }

        cout << ans << "\n";
    }

    return 0;
}