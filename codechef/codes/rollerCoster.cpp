//https://www.codechef.com/problems/MINHEIGHT
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, x, h;
    cin >> t;

    while(t!=0){
        cin >> x >> h;

        if(x>=h){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        t--;
    }


    return 0;
}
