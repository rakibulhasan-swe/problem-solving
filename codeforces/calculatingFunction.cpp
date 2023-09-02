//https://codeforces.com/problemset/problem/486/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, val = 1, evenSum = 0, oddSum = 0;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        arr[i] = val++;

    for(int i=0; i<n; i++){
        if(i%2 == 1){
           oddSum+=arr[i];
        }else{
            evenSum+=arr[i];
        }
    }

    cout << - evenSum + oddSum << endl;



    return 0;
}

/*
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    long long n, a;
    cin >> n;
    if(n % 2 == 0) a = n / 2;
    else a = ((n + 1) / 2) * (-1);
    cout << a << endl;
    return 0;
}
*/
