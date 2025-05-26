Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist, return -1.


Examples:
Input: nums = [8, 8, 7, 6, 5]

Output: 7

Explanation: The largest value in nums is 8, the second largest is 7

Input: nums = [10, 10, 10, 10, 10]

Output: -1

Explanation: The only value in nums is 10, so there is no second largest value, thus -1 is returned

*******solve 1*************
int maxVal = nums[0];
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > maxVal) {
                maxVal = nums[i];
            }
        }

        int secondMax = INT_MIN;
        bool found = false;

        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != maxVal && nums[i] > secondMax) {
                secondMax = nums[i];
                found = true;
            }
        }

        if (found) {
            return secondMax;
        } else {
            return -1;
        }

        ********solve-2*******
        class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
       int max = INT_MIN;
        int max1 = INT_MIN;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > max) {
                max = nums[i];
            }
        }

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > max1 && nums[i] != max) {
                max1 = nums[i];
            }
        }

        if(max1 == INT_MIN) {
            return -1; 
        } else {
            return max1;
        }

    }
};