#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        string s;
        cin >> s;

        ll ans  = 0, cnt = 0;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='0') ans+= cnt + (cnt>0);
            else cnt++;
        }
        cout << ans << "\n";
    }

    return 0;
}