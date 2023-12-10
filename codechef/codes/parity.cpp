//https://www.codechef.com/problems/PAR2
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, chocolate;
    cin >> t;

    while(t!=0){
        cin >> chocolate;
        if(chocolate%2 == 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}
