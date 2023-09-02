//https://codeforces.com/problemset/problem/116/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, c=0, m=0;
    cin >> n;

    while(n--){
        int a, b;
        cin >> a >> b;
        c -= a;
        c += b;

        if(c > m)
            m=c;
    }
    cout << m << "\n";


    return 0;
}
