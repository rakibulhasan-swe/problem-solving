// https://codeforces.com/problemset/problem/1186/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    if(n<=m && n<=k)
        cout << "YES\n";
    else
        cout << "NO\n";


    return 0;
}
