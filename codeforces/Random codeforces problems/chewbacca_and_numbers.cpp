#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for(int i=0; i<s.size(); i++)
        if (s[i] > '4')
            s[i] = '9' - s[i] + '0';

    if(s.front() == '0')
        s.front() = '9';

    cout << s << "\n";

    return 0;
}
