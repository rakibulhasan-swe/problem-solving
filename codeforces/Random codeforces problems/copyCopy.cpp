//https://codeforces.com/problemset/problem/1325/B
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, cnt=1;
        cin >> n;
        vector<int>a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());
        for(int i=0; i<n-1; i++){
            if(a[i]<a[i+1])
                cnt++;
        }
        cout << cnt << "\n";
    }

    return 0;
}
