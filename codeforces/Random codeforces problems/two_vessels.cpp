//https://codeforces.com/contest/1872/problem/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        long long a, b, c;
        cin >> a >> b >> c;

        if(a==b){
            cout << "0\n";
        }else if(a>b){
            long long cvb = 0;
            while(a>b){
                a-=c;
                b+=c;
                cvb++;
                if(a<=b)
                    break;
            }
            cout << cvb << "\n";
        }else{
            long long cvb = 0;
            while(b>a){
                b-=c;
                a+=c;
                cvb++;
                if(b<=a)
                    break;
            }
            cout << cvb << "\n";
        }

    }


    return 0;
}

