#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        int n;
        cin >> n;

        vector<int> v(n);
        for(auto &x:v) cin >> x;

        sort(v.begin(), v.end());
        int max1 = v[n-1];
        int max2 = v[n-2];
        int min1 = v[0];
        int min2 = v[1];

        int sum = abs(max1-min1) + abs(max1-min2) + abs(max2-min1) + abs(max2-min2);

        cout << sum << "\n";

    }

    return 0;
}