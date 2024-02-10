#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;

        if(n >= 127) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}