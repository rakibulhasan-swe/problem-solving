#include<bits/stdc++.h>
using namespace std;

#define fastread() (ios_base::sync_with_stdio(0), cin.tie());

int main()
{
    fastread();

    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++)
        cin >> v[i];

    sort(v.rbegin(), v.rend());

    int sumA = 0, sumB = 0;
    for(int i=0; i<n; i++){
        if(i%2 == 0)
            sumA+=v[i];
        else
            sumB+=v[i];
    }

    cout << sumA << " " << sumB << "\n";

    return 0;
}
