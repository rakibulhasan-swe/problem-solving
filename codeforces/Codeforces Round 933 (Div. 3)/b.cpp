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

        for(int i=0; i<n-2; i++){
            if(v[i]<0) break;

            v[i+1] -= 2*v[i];
            v[i+2] -= v[i];
            v[i] = 0;
        }

        if(count(v.begin(), v.end(), 0) == n) cout << "YES\n";
        else cout << "NO\n";
        
    }

    return 0;
}