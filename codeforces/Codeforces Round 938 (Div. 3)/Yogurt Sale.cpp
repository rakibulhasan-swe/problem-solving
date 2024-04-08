#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while(t--){
        int n, a , b;
        cin >> n >> a >> b;
 
        if((a+a)>b){
            if(n%2 == 0){
                cout << b*(n/2) << "\n";
            }else {
                cout << b*(n/2) + (a) << "\n";
            }
        }else{
            cout << a*n << "\n";
        }
    }
 
    return 0;
}