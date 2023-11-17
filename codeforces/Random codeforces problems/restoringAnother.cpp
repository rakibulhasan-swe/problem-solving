#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr;
    int a;

    // taking input
    for(int i=0; i<4; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    // finding maximum value
    int maxi = *max_element(arr.begin(), arr.end());

    // removing the maximum value from array
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == maxi){
            arr.erase(arr.begin()+i);
            break;
        }
    }

    // printing rest values
   for(int i=0; i<arr.size(); i++){
        if(i==arr.size()-1)
            cout << maxi - arr[i];
        else
            cout << maxi - arr[i] << " ";
    }

    cout << "\n";

    return 0;
}
