#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<char, int>m;
    for(int i=0; i<n; i++){
        if(m.find(s[i]) == m.end()){
            m[s[i]] = i;
        }else{
            int diff = i-m[s[i]];
            if(diff%2 == 1){
                cout << "No\n";
                return;
            }
            m[s[i]] = i;
        }
    }
    cout << "YES\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
