Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

There may be duplicates in the original array.

Note: An array A rotated by x positions results in an array B of the same length such that B[i] == A[(i+x) % A.length] for every valid index i.

 

Example 1:
Input: nums = [3,4,5,1,2] 3>4 4>0 5>1 1>2 2>3
nums[i] > nums[(i + 1) % n]
Output: true
Explanation: [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 3 positions to begin on the element of value 3: [3,4,5,1,2].

Example 2:
Input: nums = [2,1,3,4]
Output: false
Explanation: There is no sorted array once rotated that can make nums.

Example 3:
Input: nums = [1,2,3]
Output: true
Explanation: [1,2,3] is the original sorted array.
You can rotate the array by x = 0 positions (i.e. no rotation) to make nums.

 the array is "rotated," the next element after the last index n-1 is the first element nums[0].
So (i + 1) % n wraps around the index to 0 after reaching the end.
If i is at the last index (say i = n-1), then:

(i + 1) % n = (n-1 + 1) % n = n % n = 0

So nums[(i + 1) % n] = nums[0] → the first element of the array

********code********
class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; ++i) {
            
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }

       
        if (count <= 1) {
            return true;
        } else {
            return false;
        }
    }
};