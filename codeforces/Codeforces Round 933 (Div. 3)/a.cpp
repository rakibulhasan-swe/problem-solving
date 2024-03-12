#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        int n, m , k;
        cin >> n >> m >> k;

        vector<int> v(n), v1(m);

        for(int i=0; i<n; i++) cin >> v[i];
        for(int i=0; i<m; i++) cin >> v1[i];

        int cnt = 0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(v[i]+v1[j] <= k) cnt++;
            }
        }

        cout << cnt << "\n";
    }

    return 0;
}