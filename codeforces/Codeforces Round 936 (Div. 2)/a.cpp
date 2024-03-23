#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        vector<ll> v(n);
        // v.push_back(0);
        for(auto &x: v) cin >> x;

        sort(v.begin(), v.end());

        ll idx = 0;
        if(n%2==0) idx = (n/2)-1;
        else idx = (n/2);


        int res = 1;
        for(int i=idx+1; i<n; i++){
            if(v[i]==v[idx]) res++;
            else break;
        }

        cout << res << "\n";

    }
    

    return 0;
}