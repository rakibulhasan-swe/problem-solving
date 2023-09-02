//https://leetcode.com/problems/running-sum-of-1d-array/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i=0; i<n; i++)
        cin >> nums[i];

    vector<int>res(n);
    res[0] = nums[0];

    for(int i=1; i<n; i++){
        res[i] = res[i-1] + nums[i];
    }

    return 0;
}

/*
Actual Solution for LeetCode:
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>res(nums.size());
        res[0] = nums[0];

        for(int i=1; i<n; i++){
            res[i] = res[i-1] + nums[i];
        }

        return res;
    }
};
*/
