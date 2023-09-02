// https://leetcode.com/problems/two-sum/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, target = 0;
    bool flag = true;
    cin >> n;

    vector<int>nums(n);
    for(int i=0; i<n; i++)
        cin >> nums[i];

    cin >> target;

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i]+nums[j] == target){
                cout << "[" << i << ", " << j << "]" << "\n";
                flag = false;
                break;
            }
        }
        if(flag)
            continue;
        else
            break;
    }


    return 0;
}

/*
Actual solution for Leetcode:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        bool flag = true;
        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j] == target){
                    res.push_back(i);
                    res.push_back(j);
                    flag = false;
                    break;
                }
            }
            if(flag)
                continue;
            else
                break;
        }

        return res;
    }
};
*/
