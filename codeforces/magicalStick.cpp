//https://codeforces.com/problemset/problem/1371/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        int ans = a/2;
        if(a%2 == 1) ans++;
        cout << ans << "\n";
    }

    return 0;
}
