#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        int n, till = 0, ans = 0;
        cin >> n;
        string s;
        cin >> s;

        for(int i=0; i<s.size()-1; i++){
            if(s[i]=='*' && s[i+1]=='*'){
                till = i;
                break;
            }
        }

        if(till == 0){
            for(int i=0; i<s.size(); i++){
                if(s[i]=='@'){
                ans++;
                }
            }
        }else{
            for(int i=0; i<till; i++){
                if(s[i]=='@'){
                    ans++;
                }
            }
        }
        
        cout << ans << "\n";
    }   

    return 0;
}