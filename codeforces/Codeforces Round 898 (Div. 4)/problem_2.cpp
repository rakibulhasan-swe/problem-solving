#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        int n;
        cin >> n;
        vector<int> arr(n);

        for(int i=0; i<n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());

        arr[0]+=1;

        long long sum = 1;
        for(int i=0; i<n; i++)
            sum*= arr[i];

        cout << sum << "\n";

    }


    return 0;
}

