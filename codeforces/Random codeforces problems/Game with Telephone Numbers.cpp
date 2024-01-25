#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 3;


int main()
{
    int n;
    char s[MAXN];

    cin >> n >> s;

    int cnt8 = 0;

    for(int i = 0; i < n-10; ++i) {
        cnt8 += (s[i] == '8');
    }

    int turn_cnt = (n - 11) / 2;

    if(cnt8 <= turn_cnt) { 
        puts("NO");
    }
    else {
        puts("YES");
    }

    return 0;
}