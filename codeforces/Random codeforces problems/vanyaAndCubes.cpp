//https://codeforces.com/problemset/problem/492/A
#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    return (n*(n+1))/2;
}

int main()
{
    int n, level = 0;
    cin >> n;

    while(true){
        n -= sum(level+1);
        if(n>0)
            level++;
        else
            break;
    }
    cout << level << "\n";

    return 0;
}
