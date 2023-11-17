// https://codeforces.com/problemset/problem/1829/B
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n, res = 0, count = 0;
        cin >> n;
        vector<int> arr(n);

        for(int i=0; i<n; i++)
            cin >> arr[i];

        if(arr[0]==0 && n == 1)
            cout << "1\n";
        else{
            for(int i=0; i<n; i++){
                if(arr[i] == 1){
                   count = 0;
                }else{
                    count++;
                    res = max(res, count);
                }
            }
            cout << res << "\n";
        }
    }

    return 0;
}

