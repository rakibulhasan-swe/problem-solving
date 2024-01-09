#include <bits/stdc++.h>
using namespace std;

#define LL long long

int main()
{
    int n;

    while(cin >> n) {
        LL cumulative = 0, curr;

        for(int i = 1; i <= n; ++i) {
            cin >> curr;
            cumulative += curr;
            LL rem = cumulative - i;

            puts((rem & 1)? "1" : "2");
        }
    }

    return 0;
}