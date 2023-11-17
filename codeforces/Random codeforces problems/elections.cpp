// https://codeforces.com/problemset/problem/1593/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int a, b, c;
        cin >> a >> b>> c;

        cout << max(0, max(b, c) + 1 - a) << " " << max(0, max(a, c) + 1 - b) << " " << max(0, max(b, a) + 1 - c) << " " << "\n";
    }

    return 0;
}
