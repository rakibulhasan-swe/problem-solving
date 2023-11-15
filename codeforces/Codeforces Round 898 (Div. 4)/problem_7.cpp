#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        ll coins = 0;
        ll n = s.length();

        for(ll i=0; i<n-1; ++i){
            if(s[i] == 'A' && s[i+1] == 'B'){
                s[i] = 'B';
                s[i+1] = 'C';
                coins++;
                i-=2;
            }else if(s[i] == 'B' && s[i+1] == 'A'){
                s[i] = 'C';
                s[i + 1] = 'B';
                coins++;
                i-=2;
            }
        }

        cout << coins << "\n";
    }

    return 0;
}
