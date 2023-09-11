//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums) {
    int start = 0;
    int end = nums.size()-1;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> nums(n);

    for(int i=0; i<n; i++)
        cin >> nums[i];

    int result = findMin(nums);
    cout << result << "\n";

    return 0;
}

/*
class Solution {
public:
    int findMin(vector<int>& nums) {
        int maxi = nums[0];
        for(int i=0; i<nums.size(); i++){
            if(maxi>nums[i])
                maxi = nums[i];
        }
        return maxi;
    }
};
*/
