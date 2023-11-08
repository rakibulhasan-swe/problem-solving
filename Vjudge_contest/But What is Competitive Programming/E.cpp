#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int a;
    cin >> a;

    string s = to_string(a);
    if(s.size()==4) cout << a << "\n";
    else if(s.size()==3) cout << "0" << a << "\n";
    else if(s.size()==2) cout << "00" << a << "\n";
    else if(s.size()==1) cout << "000" << a << "\n";


    return 0;
}

