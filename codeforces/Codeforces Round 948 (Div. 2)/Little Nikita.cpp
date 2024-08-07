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

        if(m>n) cout << "NO\n";
        else{
            int r = n-m;

            if(r%2 == 0) cout << "YES\n";
            else cout << "NO\n";
        }
    }

    return 0;
}