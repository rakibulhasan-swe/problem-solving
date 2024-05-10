#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int cnt = 0, cnt1 = 0;
        for(int i=1; i<s.size(); i++){
            if(s[i-1]=='0' && s[i]=='1') cnt++;
            else if(s[i-1]=='1' && s[i]=='0') cnt1++;
        }
        cout << cnt+(cnt1-1) << "\n";
    }

    return 0;
}