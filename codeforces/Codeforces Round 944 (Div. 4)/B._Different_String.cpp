#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        string t = s;
        sort(t.begin(), t.end());

        if(s!=t){
            cout << "YES\n";
            cout << t << "\n";
            continue;
        }
        sort(t.rbegin(), t.rend());
        if(s!=t){
            cout << "YES\n";
            cout << t << "\n";
            continue;
        }
        cout << "NO\n";
    }
    return 0;
}