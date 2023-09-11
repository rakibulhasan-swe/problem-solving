//https://leetcode.com/problems/binary-search/
#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target){
    int start = 0;
    int end = nums.size()-1;

    while(start<=end){
        int mid = (start+end)/2;
        if(nums[mid] == target){
            return mid;
        }else if(nums[mid]<target){
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    return -1;
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
    int result = search(nums, target);

    cout << result << "\n";


    return 0;
}

/*
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        while(start<=end){
            int mid = (start+end)/2;
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid]<target){
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
        return -1;
    }
};
*/
