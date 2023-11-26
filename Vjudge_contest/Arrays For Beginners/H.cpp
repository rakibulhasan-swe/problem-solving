#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++) cin >> v[i];

    for(int i=0; i<n; i++){
        for(int j=i; j<n-1; j++){
            if(v[j]>=v[j+1]) swap(v[j], v[j+1]);
        }
    }
    for(int i=0; i<n; i++) cout << v[i] << " ";
    cout << "\n";


    return 0;
}