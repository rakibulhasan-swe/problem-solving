#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin >> tc;

    while(tc--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];

        int sum = 0;
        for(int i=0; i<n; i++) {
            sum+= abs(v[i]);
        }
        cout << sum << "\n";
    }

    return 0;
}