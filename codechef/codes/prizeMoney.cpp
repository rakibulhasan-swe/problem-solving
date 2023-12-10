//https://www.codechef.com/problems/PRIZEPOOL
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, prizeTop10, prizeRest90;
    cin >> t;

    while(t!=0){

        cin >> prizeTop10 >> prizeRest90;
        int total = 10*prizeTop10 + 90*prizeRest90;
        cout << total << endl;

        t--;
    }

    return 0;
}
