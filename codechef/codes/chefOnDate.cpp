//https://www.codechef.com/problems/CHEFONDATE
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, money, bill;
    cin >> t;

    while(t!=0){
        cin >> money >> bill;
        if(money>=bill){
            cout << "YES" << endl;
        }else{
            cout << "NO \n";
        }

        t--;
    }

    return 0;
}
