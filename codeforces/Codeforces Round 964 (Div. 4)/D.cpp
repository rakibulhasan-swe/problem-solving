#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s, t;
    cin >> s >> t;
    int i=0, n=s.size(), m=t.size();

    for(int j=0; j<m; j++){
        while(i<n && s[i]!=t[j]){
            if(s[i]=='?'){
                s[i]=t[j];
                break;
            }
            i++;
        }
        if(i<n && s[i]==t[j]) i++;
        else{
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    
    while(i<n){
        if(s[i] == '?') s[i] = 'r';
        i++;
    }
    cout << s << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}