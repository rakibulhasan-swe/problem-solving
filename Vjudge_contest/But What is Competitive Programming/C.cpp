#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    if(a==b) cout << a+b << "\n";
    else if(a>b) cout << a+(a-1) << "\n";
    else cout << b+(b-1) << "\n";


    return 0;
}

