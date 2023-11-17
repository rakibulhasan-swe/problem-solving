#include<bits/stdc++.h>
using namespace std;

int main(){
    int i, n, arr[105];

    cin >> n;

    // array input
    for(i=1; i<=n; i++){
        cin >> arr[i];
    }
    //even odd counting
    int ec = 0, oc = 0;
    for(i=1; i<=n; i++){
        if(arr[i]%2 == 0)
            ec++;
        else
            oc++;
    }

    // checking the index of different value
    if(ec == 1){
        for(i=1; i<=n; i++){
            if(arr[i]%2 == 0)
                cout << i << endl;
        }
    }else{
        for(i=1; i<=n; i++){
            if(arr[i]%2 == 1)
                cout << i << endl;
        }
    }




    return 0;
}
