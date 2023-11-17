//https://codeforces.com/problemset/problem/228/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long count  = 0;
    vector<int>arr(4);
    for(long long i=0; i<4; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    for(long long i=0; i<3; i++){
        if(arr[i]!=arr[i+1])
            count++;
    }
    cout << 3-count << "\n";


    return 0;
}
