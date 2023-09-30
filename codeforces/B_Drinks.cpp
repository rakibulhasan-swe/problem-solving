#include<bits/stdc++.h>
using namespace std;

#define fastread() (ios_base::sync_with_stdio(0), cin.tie(NULL));
#define ll long long

int main()
{
    fastread();

    double n, sum = 0;
    cin >> n;

    vector<double> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
        sum+=v[i];
    }

    cout << fixed << setprecision(12) << sum/n << "\n";


    return 0;
}

