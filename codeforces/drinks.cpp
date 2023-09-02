//https://codeforces.com/problemset/problem/200/B
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    double sum = 0.0;
    cin >> n;
    vector<int>arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    double avg = sum / n;

    cout << fixed << setprecision(12) << avg << "\n";

    return 0;
}
