// https://codeforces.com/problemset/problem/124/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, a, b;
    cin >> n >> a >> b;

    cout <<  min(n-a, b+1) << "\n";

    return 0;
}
