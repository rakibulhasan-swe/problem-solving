#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    int count = 0;
    for(int i=a; i<=b; i++)
        count++;

    cout << count << "\n";


    return 0;
}
