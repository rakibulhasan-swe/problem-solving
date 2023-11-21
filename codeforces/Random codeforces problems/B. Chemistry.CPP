#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n, k;
        string s;
        cin >> n >> k >> s;

        int cnt = 0;
        map<char, int> mp;
        for(auto i:s) mp[i]++;

        for(auto i:mp){
            if(i.second%2==1) cnt++;
        }

        if(cnt<=(k+1)) cout << "YES\n";
        else cout << "NO\n";

    }

    return 0;
}
