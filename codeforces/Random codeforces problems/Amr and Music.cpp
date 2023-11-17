#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, k, sum = 0, cnt = 0, j = 1;
    cin >> n >> k;

    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        sum+=v[i];
    }
    sort(v.begin(), v.end());

    if(sum<=k){
        cout << n << "\n";
        for(int i=0; i<n; i++)
            cout << j++ << " ";
    }else{
        for(int i=0; i<n; i++){
            if(k>=v[i]){
                cnt++;
                k-=v[i];
            }
        }
        // output
        cout << cnt << "\n";
        for(int i=1; i<=cnt; i++){
            cout << j++ << " ";
        }
    }
    cout << "\n";

    return 0;
}
