#include <bits/stdc++.h>
using namespace std;

void prefix_sum(vector<int> &pr_sum, vector<int> &v, int n){
    pr_sum[0] = 0;
    for(int i=1; i<=n; i++){
        pr_sum[i] = pr_sum[i-1] + v[i-1] -1;
    }    
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--) {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        vector<int> v1(n+1);
        v1[0] = 0;

        for (int i=0; i<n; ++i){
            cin >> v[i];
            if(v[i]==1) v1[i+1] = v1[i]+1;
            else v1[i+1] = v1[i];
        } 

        vector<int>v2(n+1);
        prefix_sum(v2, v, n);

        while(k--){
            int l, r;
            cin >> l >> r;

            if(l==r) {
                cout << "NO\n";
                continue;
            }

            int c = v1[r]-v1[l-1], s = v2[r] - v2[l-1];

            cout << ((s>=c) ? "YES\n" : "NO\n");

        }

        
    }

    return 0;
}
