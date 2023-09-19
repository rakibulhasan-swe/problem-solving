// https://codeforces.com.cn/contest/1560/problem/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int arr[1001];

    int j = 1;
    for(int i=1 ; i<=1666; i++){
        if(i%3 != 0){
            if(i%10 != 3){
                arr[j] = i;
                j = j+1;
            }
        }
    }

    int t, k;
    cin >> t;

    while(t--){
        cin >> k;
        cout<< arr[k] << "\n";
    }

    return 0;
}
