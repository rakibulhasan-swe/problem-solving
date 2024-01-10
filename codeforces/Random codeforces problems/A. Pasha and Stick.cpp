#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(cin >> n) {
        int ans = 0;

        if(!(n & 1)) {
            n >>= 1;
            --n;
            ans = n >> 1;
        }

        cout << ans << "\n";
    }
    
    return 0;
}