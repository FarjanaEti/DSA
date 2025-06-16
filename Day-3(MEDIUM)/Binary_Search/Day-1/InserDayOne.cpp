Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.
Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2

***solution**
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

    int left = 0, right = n - 1, ans = n;  // default insert at end

    while (left <= right) {
        int mid = (left + right) / 2;

        if (nums[mid] == target) {
            ans = mid;
            break;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (ans == n) {//ans not updated by mid 
        ans = left; // correct insert position if not found
    }

    cout << "Target index or insert position: " << ans << endl;

    return 0;
}

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        
        while (left <= right) {
            int mid = (left + right) / 2;

            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }

        // If not found, left is the correct insert position
        return left;
    }
};

