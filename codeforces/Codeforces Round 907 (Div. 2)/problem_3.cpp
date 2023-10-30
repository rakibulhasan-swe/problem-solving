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
        ll n;
        cin >> n;

        vector<ll> v(n);
        ll sum = 0;
        for(ll i=0; i<n; i++){
            cin >> v[i];
            sum+=v[i];
        }
        // sort the array
        sort(v.begin(), v.end());
        sort(v.rbegin(), v.rend());

        ll random = 0, tmp = 0, result = 0, fres = sum;
        for(ll j=0; j<n; j++){
           random+=v[j];
           sum-=v[j];
           if(random>sum){
            tmp = random-sum;
            tmp = (tmp+1)/2;
           }
           result = sum+tmp;
           fres = min(fres, j+1+result);
        }

        cout << fres << "\n";
    }



    return 0;
}
