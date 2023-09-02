//https://codeforces.com/problemset/problem/758/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());
    int maxi = arr[n-1];

    for(int i=0; i<n-1; i++){
        if(maxi > arr[i]){
            sum+= (maxi-arr[i]);
        }
    }

    cout << sum << "\n";

    return 0;
}
