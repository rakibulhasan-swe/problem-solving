//https://codeforces.com/problemset/problem/266/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, R = 0, G = 0, B = 0;
    cin >> n;
    char arr[n];

    for(int i=0; i<n; i++)
        cin >> arr[i];

    for(int i=0; i<n; i++){
        if(arr[i] == 'R' || arr[i] == 'G' || arr[i] == 'B'){
            if(arr[i] == 'R'){
                if(arr[i] == 'R' && arr[i+1] == 'R'){
                    R++;
                }
            }
            if(arr[i] == 'G'){
                if(arr[i] == 'G' && arr[i+1] == 'G'){
                    G++;
                }
            }
            if(arr[i] == 'B'){
                if(arr[i] == 'B' && arr[i+1] == 'B'){
                    B++;
                }
            }
        }
    }


    cout << R+G+B << "\n";

    return 0;
}
