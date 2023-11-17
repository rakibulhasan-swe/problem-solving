#include<bits/stdc++.h>
using namespace std;

#define fastread() (ios_base::sync_with_stdio(0), cin.tie(NULL));
#define ll long long

int main()
{
    fastread();

    int n, sum = 0, res = 0;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
        sum+=v[i];
    }
    res = sum/4;
    if(sum%4>0)
        res++;

    cout << res << "\n";


    return 0;
}
