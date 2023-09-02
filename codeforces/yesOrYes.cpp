//https://codeforces.com/problemset/problem/1703/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        bool flag = true;
        cin >> s;

        if(s=="YES" || s=="YEs" || s=="YeS" || s=="yES" || s=="yes" || s=="Yes" || s=="yEs" || s=="yeS"){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }

    return 0;
}
