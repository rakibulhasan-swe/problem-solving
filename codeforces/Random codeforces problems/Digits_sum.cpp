#include<bits/stdc++.h>
using namespace std;

#define fastread() (ios_base::sync_with_stdio(0), cin.tie(NULL));


int main()
{
    fastread();

    int tc;
    cin >> tc;

    while(tc--){
        int n, cnt = 0, res = 0;
        cin >> n;

        res = n/10;

        if(n%10 == 9)
            cout << ++res << "\n";
        else
            cout << res << "\n";

    }

    return 0;
}
