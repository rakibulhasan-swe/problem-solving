//https://www.codechef.com/problems/CHAIRS_ https://www.codechef.com/problems/CREDS
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, students, chair;
    cin >> t;

    while(t!=0){
        cin >> students >> chair;

        if(chair>=students){
            cout << "0" << endl;
        }else{
            cout << students-chair << endl;
        }
        t--;
    }

    return 0;
}
