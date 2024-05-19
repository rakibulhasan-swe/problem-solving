#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        int total = a+b+c;
        if(total%2 != 0){
            cout << "-1\n";
            continue;
        }

        int tGames = total/2;

        if((a+b) <= c) cout << (a+b) << "\n";
        else cout << tGames << "\n";
    }

    return 0;
}