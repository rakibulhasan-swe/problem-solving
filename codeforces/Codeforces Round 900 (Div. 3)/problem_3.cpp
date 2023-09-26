#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        long long n, k, x;
        cin >> n >> k >> x;

        if(k*(k+1)/2 > x || (n-k+1+n)*k / 2 < x) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}

