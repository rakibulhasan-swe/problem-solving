#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[100];

    cin >> arr[100];

    if(arr[0]>='a' && arr[0]<='z'){
        arr[0]+=32;
        cout << arr << endl;
    }else{
        cout << arr << endl;
    }

    return 0;
}
