#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int a1 = min(a, b);
        int b1 = max(a, b);

        int cnt = 0;
        for(int i=a1; i<=b1; i++){
            if(i==c || i==d){
                cnt++;
            }
        }
        if(cnt==1) cout << "YES\n";
        else cout << "NO\n"; 
    }

    return 0;
}