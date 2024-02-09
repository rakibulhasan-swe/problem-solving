#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int start = 0, end = 0;

        for(int i=0; i<n; i++){
            if(s[i]=='B' && start==0) start = i+1;
            if(s[i]=='B' && start!=0) end = i+1;
        }
        cout << abs(start-end)+1 << "\n";
    }

    return 0;
}