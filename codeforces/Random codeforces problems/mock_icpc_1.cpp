#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, i=0;
    cin >> t;

    while(t--){
        int n, a, b;
        cin >> n >> a >> b;

        vector<int> v(n);
        for(int i=0; i<n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        long long count = 0;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(v[i]!=v[j] && (v[i]+v[j]<=b && v[i]+v[j]>=a)){
                    count++;
                }
            }
        }

        cout << "Case " << ++i << ": " << count << endl;
    }

    return 0;
}
