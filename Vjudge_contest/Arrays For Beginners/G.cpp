#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++) cin >> v[i];

    bool flag = true;
    if(n==1) cout << "YES\n";
    else {
        for(int i=0; i<n/2; i++){
            if(v[i]!=v[n-i-1]){
                flag = false;
            }
        }
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}