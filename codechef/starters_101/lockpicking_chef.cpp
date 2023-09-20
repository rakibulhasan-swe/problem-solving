#include<bits/stdc++.h>
using namespace std;

int calculateDiff(char a, char b){
    int diff = abs(a-b);

    return min(diff, 10-diff);
}

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n, m;
        cin >> n >> m;
        string s, k;
        cin >> s >> k;

        int ans = INT_MAX;

        for(int i=0; i<=n-m; i++){
            int diff = 0;

            for(int j=0; j<m; j++){
                diff+=calculateDiff(s[i+j], k[j]);
            }
            ans = min(ans, diff);
        }
        cout << ans << "\n";
    }


    return 0;
}
