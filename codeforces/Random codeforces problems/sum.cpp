//https://codeforces.com/problemset/problem/1742/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if((a+b) == c)
            cout << "YES\n";
        else if((b+c) == a)
            cout << "YES\n";
        else if((a+c) == b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }


    return 0;
}
