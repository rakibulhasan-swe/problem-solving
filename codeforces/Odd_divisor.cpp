//https://codeforces.com/problemset/problem/1475/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        long long a;
        bool flag = false;
        cin >> a;

        for(long long i=2; i<=a; i++){
            if(a%i == 0){
                if(i%2 == 1){
                    cout << "YES\n";
                    flag = true;
                    break;
                }
            }
        }
        if(!flag) cout << "NO\n";
    }


    return 0;
}
