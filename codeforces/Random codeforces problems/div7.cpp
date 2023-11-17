// https://codeforces.com/problemset/problem/1650/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        if(n%7 == 0)
            cout << n << "\n";
        else{
            long long x = n%7;
            long long y = n%10;
            if(y+(7-x) <= 9)
                cout << n+(7-x) << "\n";
            else
                cout << n-x << "\n";
        }
    }

    return 0;
}
