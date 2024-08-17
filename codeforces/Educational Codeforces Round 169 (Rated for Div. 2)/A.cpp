#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<int> v(n);
        for(auto &x: v) cin >> x;
        
        if(n>2 || (v[1]-v[0]==1)) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}