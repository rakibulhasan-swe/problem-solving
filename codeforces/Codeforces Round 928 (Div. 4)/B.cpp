#include<bits/stdc++.h>
using namespace std;

int cnt_one(string s){
    int c = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '1') c++;
    }
    return c;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        int n, c1 = 0, c2 = 0, ans = 0;
        cin >> n;

        vector<string> v(n);
        for(int i=0; i<n; i++) cin >> v[i];

        for(int i=0; i<n; i++){
            c1 = cnt_one(v[i]);
            if(c1>0){
                c2 = cnt_one(v[++i]);
                if(c2>0 && c1==c2){
                    ans = 1;
                    break;
                }else {
                    ans = 0;
                    break;
                }
            }
        }
        if(ans == 1) cout << "SQUARE\n";
        else cout << "TRIANGLE\n";
    }

    return 0;
}