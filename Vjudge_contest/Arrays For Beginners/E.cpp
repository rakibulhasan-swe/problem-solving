#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++) cin >> v[i];

    int mini = INT_MAX;
    for(int i=0; i<n; i++) {
        if(v[i]<mini) mini = v[i];
    }
    int position = 0;
    for(int i=0; i<n; i++){
        if(v[i] == mini){
            position = i;
            break;
        }
    }
    cout << mini << " " << position+1 << "\n";

    return 0;
}