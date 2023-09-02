//https://codeforces.com/problemset/problem/510/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, c = 1, first = 0;
    cin >> n >> m;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(i%2 == 0){
                if(c){
                    if(j==m){
                        cout << '#';
                        c = 0;
                    }else
                        cout << '.';
                }else{
                    if(j==1){
                        cout << '#';
                        first++;
                    }else
                        cout << '.';
                }
            }else{
                cout << '#';
            }
        }
        if(first>0){
            c = 1;
            first = 0;
        }
        cout << "\n";
    }



    return 0;
}
