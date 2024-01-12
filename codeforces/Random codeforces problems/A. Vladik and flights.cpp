#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 3;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    char str[MAXN];
    cin >> str;

    --a, --b;

    cout << (str[a] == str[b]? "0" : "1") << "\n";

    return 0;
}