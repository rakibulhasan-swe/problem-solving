#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++) cin >> v[i];

    int mini = INT_MAX;
    for(int i=0; i<n; i++){
        if(v[i]<mini) mini = v[i];
    }
        
    int count = 0;
    for(int i=0; i<n; i++){
        if(v[i] == mini) count++;
    }
    
    if(count%2 == 0) cout << "Unlucky\n";
    else cout << "Lucky\n";

    return 0;
}