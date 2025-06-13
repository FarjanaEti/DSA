Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]

******Dutch National Flag problem**8
You're asked to sort an array of 0s, 1s, and 2s in-place (without using .sort() or extra space).
nums[mid] == 0: swap with low, move both low and mid forward

If nums[mid] == 1: it's in the correct section, just move mid forward

If nums[mid] == 2: swap with high, move high backward (don’t move mid)
low = 0
mid = 0
high = 5 (last index)

**solution**
#include <iostream>
using namespace std;

int main() {
    int nums[100], n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int count0 = 0, count1 = 0, count2 = 0;

    // Count number of 0s, 1s, and 2s
    for (int i = 0; i < n; i++) {
        if (nums[i] == 0)
            count0++;
        else if (nums[i] == 1)
            count1++;
        else
            count2++;
    }

    // Overwrite original array with sorted order
    int index = 0;
    for (int i = 0; i < count0; i++)
        nums[index++] = 0;
    for (int i = 0; i < count1; i++)
        nums[index++] = 1;
    for (int i = 0; i < count2; i++)
        nums[index++] = 2;

    // Output the result
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";

    return 0;
}

*leet code***
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else { // nums[mid] == 2
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
