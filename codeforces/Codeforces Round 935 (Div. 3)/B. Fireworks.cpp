#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int tc;
    cin >> tc;
 
    while(tc--){
        ll a, b, m;
        cin >> a >> b >> m;
 
        ll res = 2;
 
        cout << res+(m/a)+(m/b) << "\n";
    }
    return 0;
}