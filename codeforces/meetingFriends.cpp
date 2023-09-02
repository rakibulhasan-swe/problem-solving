//https://codeforces.com/problemset/problem/723/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v(3);
    for(int i=0; i<3; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    int mini = v[1];
    int sum = 0;
    sum+=(mini-v[0]);
    sum+=(v[2]-mini);

    cout << sum << "\n";

    return 0;
}
