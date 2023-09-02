// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
#include<bits/stdc++.h>
using namespace std;

void print_Array(vector<int> arr){
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

vector<int> searchRange(vector<int>& nums, int target) {
    vector<int>res;
    int n = nums.size();
    for(int i=0; i<n; i++){
        if(nums[i] == target){
            res.push_back(i);
            if((i==0 && nums[i]!=nums[n-1])){
                res.push_back(i);
            }else if(i == (n-1) && (nums[i-2] != nums[i-1])){
                res.push_back(i);
            }else{
                res.push_back(i+1);
            }
            return res;
        }
    }

    return res = {-1, -1};
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, target;
    cin >> n;

    vector<int>nums(n);

    for(int i=0; i<n; i++)
        cin >> nums[i];

    cin >> target;

    vector<int> res = searchRange(nums, target);

    print_Array(res);


    return 0;
}
