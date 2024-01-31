#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2000 + 3;
const int MAXX = 2e6 + 3;

int main()
{
    int n;
    cin >> n;

    bitset<MAXX> doesExist;
    int xx[MAXN], yy[MAXN];

    for(int i = 0; i < n; ++i) {
        scanf("%d", xx+i);
        doesExist[xx[i]] = true;
    }

    for(int i = 0; i < n; ++i) {
        scanf("%d", yy+i);
        doesExist[yy[i]] = true;
    }

    int cnt = 0;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            int r = xx[i] ^ yy[j];
            if(0 <= r and r < MAXX and doesExist[r])
                ++cnt;
        }
    }

    puts(cnt & 1? "Koyomi" : "Karen");

    return 0;
}