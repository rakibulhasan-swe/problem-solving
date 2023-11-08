#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int a, b, c, a_sum = 0, b_sum = 0, t_sum = 0;
    cin >> a >> b >> c;

    int n = max(a, b);

    for(int i=1; i<=n; i++){
        a_sum = i*a;
        b_sum = i*b;
        t_sum = (a_sum+b_sum);

        if(c==a_sum){
            cout << "Yes\n";
            break;
        }else if(c==b_sum){
            cout << "Yes\n";
            break;
        }else if(c==t_sum){
            cout << "Yes\n";
            break;
        }

        if(a_sum && b_sum && t_sum > c){
            cout << "No\n";
            break;
        }
    }

    return 0;
}
