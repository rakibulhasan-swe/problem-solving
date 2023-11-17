//https://codeforces.com/problemset/problem/1409/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int a, b, maxi, mini;
        cin >> a >> b;

        maxi = max(a, b);
        mini = min(a, b);

        if(maxi==mini)
            cout << 0 << "\n";
        else{
            if((maxi-mini)%10 == 0){
                cout << (maxi-mini)/10 << "\n";
            }else{
                cout << (maxi-mini)/10 + 1 << "\n";
            }
        }

    }

    return 0;
}
