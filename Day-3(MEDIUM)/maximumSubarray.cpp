Given an integer array nums, find the subarray with the largest sum, and return its sum.
Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
Example 2:

Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
 
***So what is Kadane's Algorithm****
It iterates through the array once and at each position, decides:
Should I add this number to the current subarray?
Or should I start a new subarray from this number?

currentSum = max(x, currentSum + x)
maxSum = max(maxSum, currentSum)
Kadane’s Algorithm must perform those two decisions — but 
you can write them in your own way, using if-else instead of max().

****Solution********
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int nums[100];

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int currentSum = nums[0];
    int maxSum = nums[0];

    for (int i = 1; i < n; i++) {
        if (currentSum + nums[i] > nums[i]) {
            currentSum = currentSum + nums[i];
        } else {
            currentSum = nums[i];
        }

        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    cout << maxSum << endl;

    return 0;
}
