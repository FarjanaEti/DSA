Input: nums = [0,1]

Output: 2

Explanation:

n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.

Example 3:

Input: nums = [9,6,4,2,3,5,7,0,1]

Output: 8

Explanation:

n = 9 since there are 9 numbers, so all numbers are in the range [0,9]. 
8 is the missing number in the range since it does not 
appear in nums.

****solution****
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int num[100];
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> num[i];
    }

    sort(num, num + n);//num= num[0] & num+n=  num[1], num[2]
    for(int i = 0; i < n; i++){

        if(num[i]!= i){
            cout<<i;
            return 0;
        }
    }

   cout<<n;//if match then n is missing

    return 0;
}

*******leet*****
class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n = nums.size();
        
        sort(nums.begin(), nums.end()); 
        for (int i = 0; i < n; i++) {
            if (nums[i] != i) {
                return i; 
            }
        }
        return n;  
    }
};
