// https://codeforces.com/problemset/problem/978/B
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, count = 0;
    cin >> n;

    vector<char>arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];

    for(int i=0; i<n-2; i++){
        if(arr[i] == 'x' && arr[i+1] == 'x' && arr[i+2] == 'x')
            ++count;
    }
    cout << count << "\n";

    return 0;
}
