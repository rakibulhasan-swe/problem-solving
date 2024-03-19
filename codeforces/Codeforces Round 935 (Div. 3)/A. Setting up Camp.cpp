#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
 
    while(t--){
        ll a, b, c;
        cin >> a >> b >> c;

        int extrovert = b%3;

        if((c+extrovert)>=3 || extrovert==0) cout << a+ceil(c+extrovert/3) << "\n";
        else cout << "-1\n";
 
        // ll extrovert = b%3;
        // ll c_ex = b/3;
 
        // ll u = (extrovert+c)/3;
        // ll u_e = (extrovert+c)%3;
 
        // ll e = u_e ? 1 : 0; 
 
        // if((extrovert==1 && c<2) || (extrovert==2 && c<1)) cout << "-1\n"; 
        // else cout << a+c_ex+(u+e) << "\n";
    }
 
    return 0;
}