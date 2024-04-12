#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        string x, y;
        cin >> x >> y;

        if(x<y) swap(x, y);

        bool bigger = false;
        for(int i=0; i<x.size(); i++){
            if(x[i]>y[i] && bigger==true){
                swap(x[i], y[i]);
            }

            if(x[i] != y[i]) bigger=true;
        }

        cout << x << "\n" << y << "\n";
    }

    return 0;
}