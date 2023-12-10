#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--){
        int x, y, z;
        cin >> x >> y >> z;

        int students = (x*y)*0.50;

        if(z>students) cout << "YES\n";
        else cout << "NO\n";

    }

    return 0;
}