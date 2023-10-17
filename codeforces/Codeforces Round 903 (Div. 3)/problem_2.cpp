#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--) {
        ll a, b, c, count = 0;
        cin >> a >> b >> c;
        ll mini = min({a, b, c});

        bool position = true;
        if(a%mini != 0 || b%mini != 0 || c%mini != 0) position = false;

        // for a
        while(a!=mini){
            if(a%mini != 0 || count > 3){
                position = false;
                break;
            }
            a-=mini;
            ++count;
        }
        // for b
        while(b!=mini){
            if(b%mini != 0 || count > 3){
                position = false;
                break;
            }
            b-=mini;
            ++count;
        }
        // for c
        while(c!=mini){
            if(c%mini != 0 || count > 3){
                position = false;
                break;
            }
            c-=mini;
            ++count;
        }
        if(count > 3) position = false;
        if(position)
            cout << "YES\n";
        else
            cout << "NO\n";

    }

    return 0;
}

