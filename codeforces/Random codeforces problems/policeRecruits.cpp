//https://codeforces.com/problemset/problem/427/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c = 0, p = 0, n;
    cin >> n;
    vector<int>arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i] == -1){
            if(p>0){
                p--;
            }else{
                c++;
            }
        }else{
            p+=arr[i];
        }
    }

    cout << c << "\n";


    return 0;
}
