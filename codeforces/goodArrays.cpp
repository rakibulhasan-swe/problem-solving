// https://codeforces.com/problemset/problem/1856/B
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> nums(n);
        long long int sum = 0;
        int count = 0;

        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            if(x == 1)
                count++;
            sum+=x;
            nums.push_back(x);
        }
        if(sum-n >= count && n!=1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
