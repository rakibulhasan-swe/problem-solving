#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(auto &x: v) cin >> x;

        bool flag = true;
        for(int i=1; i<n; i++){
            if(abs(v[i]-v[i-1])==5 || abs(v[i]-v[i-1])==7){
                continue;
            }
            flag = false;
            break;
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }

    
    return 0;
}