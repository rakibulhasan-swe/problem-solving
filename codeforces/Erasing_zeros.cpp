#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc, c, pos, pos2, i;
    string s;

    cin >> tc;


    while(tc--)
    {
        c = 0, pos = 0, pos2 = 0;
        cin >> s;

        for(i=0; i<s.length(); i++)
        {
            if(s[i]=='1')
            {
                pos=i;
                break;
            }
        }

        for(i=s.length(); i>=pos; i--)
        {
            if(s[i]=='1')
            {
                pos2=i;
                break;
            }
        }

        for(i=pos; i<pos2; i++)
        {
            if(s[i]=='0')
                c++;
        }

        cout << c << "\n";
    }
}
