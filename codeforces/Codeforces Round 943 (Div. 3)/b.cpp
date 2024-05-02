#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;

        int cnt = 0;
        int idx_a = 0, idx_b = 0;
        
        while (idx_a < n && idx_b < m) {
            if (a[idx_a] == b[idx_b]) {
                idx_a++;
                cnt++;
            }
            idx_b++;
        }
        cout << cnt << "\n";
    }

    return 0;
}