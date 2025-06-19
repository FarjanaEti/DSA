Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
If target is not found in the array, return [-1, -1].
You must write an algorithm with O(log n) runtime complexity.
Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Input: nums = [], target = 0
Output: [-1,-1]
 
***solution*****
#include <iostream>
using namespace std;

int main() {
    int n, nums[100], target;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter target value: ";
    cin >> target;

    int first = -1, last = -1;
    int low = 0, high = n- 1; // default insert at end

    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            first = mid;
            high = mid - 1; // continue searching left
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    low = 0, high = n- 1;

    // Find last occurrence
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            last = mid;
            low = mid + 1; // continue searching right
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << "Target index or insert position: " << first <<endl << last;

    return 0;
}

***leet code****
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, last = -1;
        int low = 0, high = nums.size() - 1;

       
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) {
                first = mid;
                high = mid - 1; 
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        low = 0;
        high = nums.size() - 1;

      
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) {
                last = mid;
                low = mid + 1;  
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return {first, last};
    }
};
