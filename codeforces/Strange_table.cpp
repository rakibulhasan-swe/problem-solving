#include<bits/stdc++.h>
using namespace std;

#define fastread() (ios_base::sync_with_stdio(0), cin.tie(NULL));
#define ll long long

int main()
{
    fastread();

    int tc;
    cin >> tc;

    while(tc--){
        ll n, m, x;
        cin >> n >> m >> x;

        ll col = (x/n);
        if(x%n != 0)col++;
        ll row = x % n;
        if(row == 0)row = n;

        ll ans = ((row - 1) * m) + col;

        cout << ans << "\n";
    }


    return 0;
}
