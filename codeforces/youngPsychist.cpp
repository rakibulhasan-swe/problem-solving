//https://codeforces.com/problemset/problem/69/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, y, z, xSum = 0, ySum = 0, zSum = 0;
    cin>> t;
    while(t--)
    {
        cin >> x >> y >> z;
        xSum+=x;
        ySum+=y;
        zSum+=z;
    }
    if(xSum==0 && ySum==0 && zSum==0)
        cout << "YES\n";
    else
        cout<< "NO\n";


    return 0;
}
