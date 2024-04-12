#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n, m, k;
        cin >> n >> m >> k;

        if(n-(n/m+(n%m !=0)) <= k) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}
