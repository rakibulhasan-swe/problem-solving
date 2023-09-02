#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int a, b, c, d, cnt = 0;
        cin >> a >> b >> c >> d;
        if(b>a)
            cnt++;
        if(c>a)
            cnt++;
        if(d>a)
            cnt++;

        cout << cnt << "\n";
    }

    return 0;
}
