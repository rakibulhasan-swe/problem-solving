#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    double a, b;
    cin >> a >> b;

    double per_b = (b/a)*100;
    double res = (100.00 - per_b);
    cout << res << "\n";


    return 0;
}
