Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number.
You must solve the problem without modifying the array nums and using only constant extra space.

Example 1:
Input: nums = [1,3,4,2,2]
Output: 2
Example 2:
Input: nums = [3,1,3,4,2]
Output: 3

*****solution*****
#include <iostream>
using namespace std;

int main() {
    int n,duplicate;
    int num[100];
    cin >> n ;

    for(int i = 0; i < n; i++) {
        cin >> num[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(num[i] == num[j]) {
                    duplicate=num[j];
    cout << duplicate << endl;
                return 0;
            }
        }
    }
    return 0;
}

///leet code////
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        bool seen[100001] = {false}; // keep track of which numbers have already appeared.
        for (int i = 0; i < nums.size(); i++) {
            if (seen[nums[i]])
                return nums[i]; 
            seen[nums[i]] = true;
        }
        return -1; 
    }
};
//explanation
i = 3 → nums[3] = 2
→ seen[2] = false → mark it true

i = 4 → nums[4] = 2
→ seen[2] = true → 🎯 return 2

//another solution
int findDuplicate(vector& nums) {
while(nums[0]!=nums[nums[0]]){
swap(nums[0], nums[nums[0]]);
}
return nums[0];
}
//here we tries to keep each value there equivalent index
//like value 3 should be in index 3
