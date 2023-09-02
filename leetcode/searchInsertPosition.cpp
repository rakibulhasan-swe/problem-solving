// https://leetcode.com/problems/search-insert-position/description/
#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    for(int i=0; i<nums.size(); i++){
        if(nums[i] >= target){
            return i;
        }
    }
    return nums.size();
}

int main()
{
    int n, target;
    cin >> n;

    vector<int> nums(n);
    for(int i=0; i<n; i++)
        cin >> nums[i];

    cin >> target;

    int res = searchInsert(nums, target);

    cout << res << "\n";


    return 0;
}

/* actual solution:
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){
            if(nums[i] >= target){
                return i;
            }
        }
        return nums.size();
    }
};
*/
