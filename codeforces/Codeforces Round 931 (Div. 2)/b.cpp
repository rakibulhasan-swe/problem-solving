#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        int n;
        cin >> n;

        vector<int> coin{0, 1, 2, 1, 2, 3, 1, 2, 3, 2, 1, 2, 2, 2, 3};

        if(n<15) cout << coin[n%15] << "\n";
        else if(n%15 == 5) cout << n/15+1 << "\n";
        else if(n%15 == 8) cout << n/15+2 << "\n";
        else cout << n/15 + coin[n%15] << "\n";
    }

    return 0;
}

// i know the first 14 answer
// then the greedy approach breaks for 20 and 23 and +15 to them
// for 20 - i will be needed 20/15-1 + 2 (10+10)
// for 23 - i will be needed 23/15-1 + 3 (10+10+3)
