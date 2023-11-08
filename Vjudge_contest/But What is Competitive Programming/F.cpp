#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int a, b, t;
    cin >> a >> b >> t;

    if(a>t) cout << "0\n";
    else {
        int idx=2;
        int count = b;
        for(int i=a; i<=t; i+=(idx*a)){
            count+=b;
        }
        cout << count << "\n";
    }

    return 0;
}
