#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for(auto &x: v) cin >> x;

        sort(v.begin(), v.end());

        if(v[0] != v[1]) {
            cout << "YES\n";
            continue;
        }

        int f = 0;
        for(auto x: v) 
            f+= (x%v[0] > 0);
        
        if(f) cout << "YES\n";
        else cout << "NO\n";
        
    }

    return 0;
}