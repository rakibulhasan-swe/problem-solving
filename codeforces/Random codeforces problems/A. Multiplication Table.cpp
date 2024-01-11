#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int main()
{
    int n, x;
    cin >> n >> x;

    int upto = min(n, int(sqrt(x))), cnt = 0;

    for(int i = 1; i <= upto; ++i)
        if(x % i == 0 && x/i <= n)
            cnt += 2;

    if(upto * upto == x && x <= LL(n)*n) --cnt;

    cout << cnt << "\n";

    return 0;
}