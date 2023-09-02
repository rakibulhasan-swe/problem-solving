#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int floor;
        cin >> floor;

        int total = 0;
        for(int i=1; i<=9; i++){
            int sum = 0;
            for(int j=1; j<=4; j++){
                sum=sum*10+i;
                total+=j;
                if(sum==floor){
                    cout << total << "\n";
                }
            }
        }

    }

    return 0;
}
