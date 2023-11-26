#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);

        for(int i=0; i<n; i++) cin >> v[i];

        int res = INT_MAX;
        for(int i=0; i<n; i++){
            for(int j=i; j<n-1; j++){
                int sum = (v[i]+v[j+1])+(j+2)-(i+1);
                res = min(res, sum);
            }
        }
        cout << res << "\n";
    }
    return 0;
}