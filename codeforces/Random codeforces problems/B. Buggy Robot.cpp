#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100 + 3;

int main()
{
    char str[MAXN];
    scanf("%*d %s", str);

    int u, d, l, r;
    u = d = l = r = 0;


    for(int i = 0; str[i]; ++i) {
        if(str[i] == 'U') ++u;
        else if(str[i] == 'D') ++d;
        else if(str[i] == 'L') ++l;
        else ++r;
    }

    cout << 2 * (min(l, r) + min(u, d)) << "\n";

    return 0;
}