#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{
    ll t;
    cin >> t;
 
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
 
        vector<int> v(n), v1(n);
        for(auto &x: v) cin >> x;
        for(auto &x: v1) cin >> x;
 
        ll sum=0;
        ll res = LLONG_MAX;
 
        for(ll i=n-1; i>=0; i--)
        {
            if(i+1<=m)
                res = min(res, sum+v[i]);
 
            sum += min(v[i], v1[i]);
        }
        cout << res << "\n";
    }
}