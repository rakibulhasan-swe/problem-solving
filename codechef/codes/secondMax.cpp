//https://www.codechef.com/problems/SNDMAX
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, num1, num2, num3;
    cin >> t;

    while(t!=0){
        cin >> num1 >>num2 >> num3;

        if((num1>num2 && num1<num3)||(num1>num3 && num1<num2)){
            cout << num1 << endl;
        }else if((num2>num1 && num2<num3)||(num2>num3 && num2<num1)){
            cout << num2 << endl;
        }else if((num3>num1 && num3<num2)||(num3>num2 && num3<num1)){
            cout << num3 << endl;
        }

        t--;
    }

    return 0;
}
