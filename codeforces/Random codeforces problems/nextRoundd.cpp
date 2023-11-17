#include<bits/stdc++.h>
using namespace std;

int main(){
    int i, n, k, arr[55], next = 0;

    cin >> n >> k;

    // array input
    for(i=1; i<=n; i++){
        cin >> arr[i];
    }

    for(i=1; i<=n; i++){
        if(arr[i] > 0){
            if(arr[i] >= arr[k])
            next++;
        }else{
            continue;
        }
    }

    cout << next << endl;


    return 0;
}
