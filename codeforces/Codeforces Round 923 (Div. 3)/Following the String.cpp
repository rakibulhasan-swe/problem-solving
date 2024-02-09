#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    string s = "abcdefghijklmnopqrstuvwxyz";

    while(t--){
        int n;
        cin >> n;

        map<char, int> mp;
        for(int i=0; i<s.size(); i++) mp[s[i]] = 0;

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
            for(auto it:mp){
                if(it.second == v[i]){
                    cout << it.first;
                    mp[it.first]++;
                    break;
                }
            }
        }
        cout << "\n";
    }

    return 0;
}