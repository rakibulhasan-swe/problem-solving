#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 3;
const int INF = INT_MAX;

int arr[MAXN];
int freq[MAXN];


int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        for(int i = 0; i < n; ++i) {
            scanf("%d", arr+i);
        }

        fill_n(freq, n+1, 0);

        int i = 0, j = 0, ans = INF;

        while(i < n and j < n) {
            int a, b;

            while(i < n) {
                a = arr[i++];
                ++freq[a];
                if(freq[a] > 1) break;
            }

            while(j < n) {
                b = arr[j++];
                --freq[b];
                if(b == a)  break;
            }

            if(j < i) {
                ans = min(ans, i - j + 1);
            }
        }

        printf("%d\n", (ans != INF ? ans : -1));
    }

    return 0;
}