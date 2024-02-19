#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        string s;
        cin >> s;

        int ca = 0, cb = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'A') ca++;
            else cb++;
        }

        if(ca>cb) cout << "A\n";
        else cout << "B\n";
    }

    return 0;
}