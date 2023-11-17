//https://codeforces.com/problemset/problem/467/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, people, capacity, count = 0;
    cin >> t;

    while(t--){
        cin >> people >> capacity;
        if(capacity-people>=2){
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}
