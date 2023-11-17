#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    int tc;
	cin >> tc;

	while(tc--)
	{
		ll n;
		cin >> n;
		ll k = 1;
		ll sum = 1;

		while(1)
		{
			sum+=pow(2, k++);
			if(n%sum==0)
			{
				cout << n/sum << "\n";
				break;
			}
		}
	}

    return 0;
}
