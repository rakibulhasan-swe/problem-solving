//https://codeforces.com/problemset/problem/1725/B
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, d, sum = 0;
    cin >> n >> d;
    vector<int> players(n);
    for(int i=0; i<n; i++)
        cin >> players[i];


    sort(players.rbegin(), players.rend());
    int wins = 0;
    int count = 0;
    for(int i=0; i<n; i++){
        if(players[i] > d){
            wins++;
            count++;
        }else{
            int teamPower = players[count];
            int high_power = players[count];
            while(i < n){
                if(teamPower > d){
                    wins++;
                    count++;
                    break;
                }else{
                    i++;
                    teamPower+=high_power;
                }
            }
        }
    }

    cout << wins << "\n";


    return 0;
}
