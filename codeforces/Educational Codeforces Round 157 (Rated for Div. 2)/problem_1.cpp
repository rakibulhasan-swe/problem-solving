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
        int x, y, k;
        cin >> x >> y >> k;

        if(x<y){
            int v = y-x;
            if(k>=v) cout << y << "\n";
            else cout << y+(v-k) << "\n";

        }else{
            cout << x << "\n";
        }
    }

    return 0;
}
