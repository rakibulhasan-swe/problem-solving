#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> coordinates;

        for(int i = 0; i < k; ++i) {
            int x;
            cin >> x;
            coordinates.push_back(x);
        }

        sort(coordinates.begin(), coordinates.end());
        
        int ans = 0;
        int catDistFromHole = n;

        for(auto rit = coordinates.rbegin(); rit != coordinates.rend(); ++rit) {
            int mouseDistFromHole = n - *rit;

            if(catDistFromHole > 1 && mouseDistFromHole < catDistFromHole) {
                ++ans;
                catDistFromHole -= mouseDistFromHole;
            } else {
                break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}