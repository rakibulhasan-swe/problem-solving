#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, i, a, b, c;
    cin >> n;
    int solve = 0;

    for(i=0; i<n; i++){
        cin >> a >> b >> c;
        if(a+b+c >= 2)
            solve++;
    }

    cout << solve << endl;


    return 0;
}
