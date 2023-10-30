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
        int n, v, val;
        cin >> n >> v;

        bool flag = false;
        for(int i=1; i<n; i++){
           cin >> val;
           if(v>val){
               if(((i-1)&(i))!=0)
                flag = true;
           }
           v = val;
        }

        if(flag) cout << "NO\n";
        else cout << "YES\n";
    }



    return 0;
}
