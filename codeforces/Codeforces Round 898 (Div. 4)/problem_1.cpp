#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        string s;
        cin >> s;


        if(s == "abc" || s == "acb" || s == "bac" || s == "cba"){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }


    return 0;
}
