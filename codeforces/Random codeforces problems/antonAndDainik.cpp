//https://codeforces.com/problemset/problem/734/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, A = 0, D = 0;
    cin >> n;

    char arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

    for(int i=0; i<n; i++){
        if(arr[i] == 'A')
            A++;
        else if(arr[i] == 'D')
            D++;
    }

    if(A>D)
        cout << "Anton\n";
    else if(D>A)
        cout << "Danik\n";
    else if(A==D)
        cout << "Friendship\n";



    return 0;
}
