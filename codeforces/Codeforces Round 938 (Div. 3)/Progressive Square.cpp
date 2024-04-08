#include <bits/stdc++.h>
using namespace std;

void test()
{
    int n, c, d;
    cin >> n >> c >> d;

    int mini = INT_MAX;
    map<int, int> mp;
    int sz = n * n;

    for (int i = 0; i < sz; i++)
    {
        int s;
        cin >> s;
        mini = min(mini, s);
        mp[s]++;
    }

    int f = mini, rm;
    for (int i = 0; i < n; i++)
    {
        f = mini + i * c;
        rm = f;
        if (!mp[rm])
        {
            cout << "NO\n";
            return;
        }
        for (int j = 0; j < n; j++)
        {
            rm = f + j * d;
            if (!mp[rm])
            {
                cout << "NO\n";
                return;
            }
            mp[rm]--;
        }
    }
    cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        test();
    }

    return 0;
}