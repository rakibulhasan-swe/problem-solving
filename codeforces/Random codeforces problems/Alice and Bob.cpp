#include <bits/stdc++.h>
using namespace std;

int gcd(int m, int n)
{
    while(n != 0) {
        int t = m % n;
        m = n;
        n = t;
    }

    return m;
}

int main()
{
    int n;

    while(cin >> n) {
        int tmp;
        cin >> tmp;

        int mx = tmp, g = tmp;

        for(int i = 1; i < n; ++i) {
            cin >> tmp;

            mx = max(mx, tmp);
            g = gcd(g, tmp);
        }

        int ans = mx / g - n;

        puts((ans & 1)? "Alice" : "Bob");
    }

    return 0;
}