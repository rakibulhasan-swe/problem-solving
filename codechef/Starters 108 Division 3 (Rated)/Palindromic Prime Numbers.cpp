#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n, countEven=0, countOdd=0;
        cin >> n;

        if(n<=4) cout << 0 << " " << n << "\n";
        else cout << 1 << " " << n-1 << "\n";
    }

    return 0;
}
