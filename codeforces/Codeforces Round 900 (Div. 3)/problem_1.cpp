#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        int n, k;
        cin >> n >> k;
        vector<int>a(n);

        bool f = false;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i] == k) f = true;
        }
        if(f) cout << "YES\n";
        else cout << "NO\n";

    }


    return 0;
}
