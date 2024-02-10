#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

	int t, x, y;
	cin >> t;

	while(t--)
	{
	    cin >> x >> y;
	    cout << y/(x-1) << endl;
	}
}