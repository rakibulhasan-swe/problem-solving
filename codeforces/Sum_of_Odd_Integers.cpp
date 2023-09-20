// https://codeforces.com/problemset/problem/1327/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        long long n, k;
        cin >> n >> k;

        if(n>=k*k && (n%2)==(k%2))
            cout << "YES\n";
        else
            cout << "NO\n";
    }


    return 0;
}
