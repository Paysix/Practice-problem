// Leetcode 18 - 4Sum
// There are two inputs: 'nums' and 'target'. 'nums' is a vector and 'target' is an integer. We need to find whether the sum of any four unique integers in 'nums' is equal to 'target'.
// I use three nested loops to solve the problem. The indices i from the first 'for' loop, j from the second 'for' loop, and 'left' and 'right' represent the four integers.
// By checking the sum of the four integers, we can obtain all possible combinations.
// All found combinations are first inserted into the set 'res', because all elements in a set are unique.

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int left, right;
        set<vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i+1; j < nums.size(); ++j) {
                left = j+1;
                right = nums.size()-1;
                while (left < right) {
                    long long temp = static_cast<long long>(nums[i]) + nums[j] + nums[left] + nums[right];
                    if (temp > target) {
                        --right;
                    }
                    else if (temp < target) {
                        ++left;
                    }
                    else {
                        res.insert({nums[i],nums[j],nums[left],nums[right]});
                        ++left;
                        --right;
                    }
                }
            }
        }
        vector<vector<int>> ans;
        ans.assign(res.begin(), res.end());
        return ans;
    }
};
