// https://codeforces.com/problemset/problem/1560/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    vector<int>arr;
    arr.push_back(0);

    for(int i=1; i<=1666; i++){
        if(i%3!=0 && i%10!=3){
           arr.push_back(i);
        }
    }

    cin >> t;
    while(t--){
        int n;
        cin >> n;

        cout << arr[n] << "\n";
    }

    return 0;
}
