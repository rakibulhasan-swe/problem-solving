#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll product(vector<ll> v, ll s, ll n){
    ll p = 1;

    for(int i=s; i<n; i++) p*=v[i];

    return p;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        ll n, m, prod = 1, start = 0;
        cin >> n >> m;

        vector<ll>v(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
            prod*=v[i];
        };

        string s;
        cin >> s;

        
        for(int i=0; i<s.size(); i++){
            cout << prod%m << " ";
            
            if(s[i] == 'R'){
                prod = product(v, start, --n);
            }else if(s[i] == 'L'){
                prod = product(v, ++start, n);
            }
        }

        cout << "\n";
    }

    return 0;
}