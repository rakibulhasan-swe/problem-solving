//https://codeforces.com/problemset/problem/1154/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d, sum_of_3 = 0, i = 0;
    vector<int>arr;

    cin >> a >> b >> c >> d;

    int maxi = max({a, b, c, d});
    sum_of_3 = maxi;

    if(sum_of_3-a!=0)
        arr.push_back(sum_of_3-a);
    if(sum_of_3-b!=0)
        arr.push_back(sum_of_3-b);
    if(sum_of_3-c!=0)
        arr.push_back(sum_of_3-c);
    if(sum_of_3-d!=0)
        arr.push_back(sum_of_3-d);


    for(int i=0; i<arr.size(); i++){
        if(i==2)
            cout << arr[i];
        else
            cout << arr[i] << " ";
    }

    cout << "\n";

    return 0;
}
