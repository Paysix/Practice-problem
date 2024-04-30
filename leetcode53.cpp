// leetcode 53 - Maximum Subarray
// Given an integer array nums, find the subarray with the largest sum, and return its sum.
// Using two integer 'max' and 'sum' to check the array.
// If 'sum' is bigger than 'max', the 'sum' is the 'max'.
// If the 'sum' is less than zero, assign 'sum' to zero. (clear the current subarray)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = nums[0];
        int sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            if (sum > max) {
                max = sum;
            }
            if (sum < 0) {
                sum = 0;
            }
        }
        return max;
    }
};
