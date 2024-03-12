#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        int n; string s;
        cin >> n >> s;

        int cnt = 0;

        for(int i=0; i<n-2; i++){
            if(s[i]=='p' && s[i+1]=='i' && s[i+2]=='e') {
                cnt++; i+=2;
            }
            if(i+4<n && s[i]=='m' && s[i+1]=='a' && s[i+2]=='p' && s[i+3]=='i' && s[i+4]=='e'){
                cnt++; i+=4;
            }
            else if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p') {
                cnt++; i+=2;
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}