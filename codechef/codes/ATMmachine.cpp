//https://www.codechef.com/problems/ATM2
#include<bits/stdc++.h>
using namespace std;

void atmMachine(vector<int>arr, int n, int k)
{
    for(int i=0; i<n; i++){
        if(k>=arr[i]){
            cout << 1;
            k-=arr[i];
        }else{
            cout << 0;
        }
    }
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int>arr(n);
        for(int i=0; i<n; i++)
            cin >> arr[i];

        atmMachine(arr, n, k);
    }

    return 0;
}
