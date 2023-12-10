#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n, mihai = 0, bainca = 0;
        cin >> n;
        vector<int>arr(n);
        for(int i=0; i<n; i++)
            cin >> arr[i];

        for(int i=0; i<n; i++)
        {
            if(arr[i]%2 == 0)
                mihai+=arr[i];
            else
                bainca+=arr[i];
        }
        if(mihai>bainca)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}

