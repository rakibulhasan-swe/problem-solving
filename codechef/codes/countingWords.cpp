//https://www.codechef.com/problems/CNTWRD
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, pages, wordsPerPage;
    cin >> t;

    while(t!=0){

        cin >> pages >> wordsPerPage;
        int result = pages*wordsPerPage;
        cout << result << endl;

        t--;
    }

    return 0;
}
