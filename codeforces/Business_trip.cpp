// https://codeforces.com/problemset/problem/149/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, sum = 0, ind = 0, n;
    cin >> k;

    vector<int> v;
    for(int i=0; i<12; i++){
        cin >> n;
        v.push_back(n);
    }

    sort(v.rbegin(), v.rend());
    while(sum < k)
    {
        sum += v[ind];
        ind++;
        if(ind > 12)
        {
            ind = -1;
            break;
        }
    }

    if(k == 0)
        cout << 0 << endl;
    else
        cout << ind << endl;

    return 0;
}

