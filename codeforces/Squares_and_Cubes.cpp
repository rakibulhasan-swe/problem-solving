#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        ll x;
        cin >> x;

        ll q=sqrt(x);

        vector<int>v;

        for(ll i=1; i<=q; i++){
            if(i==1 && i*i<=x){
                v.push_back(i);
                continue;
            }
            ll sq = i*i;
            ll cubes = sq*i;
            if(sq==cubes){
                v.push_back(sq);
                continue;
            }
            if(sq<=x) v.push_back(sq);
            if(cubes<=x) v.push_back(cubes);
        }
        cout << v.size() << "\n";
    }

    return 0;
}
