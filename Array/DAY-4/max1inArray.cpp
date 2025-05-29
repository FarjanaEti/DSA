Given a binary array nums, return the maximum number of consecutive 1's in the array.
Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
Example 2:

Input: nums = [1,0,1,1,0,1]
Output: 2

*****solution*****
#include <iostream>
using namespace std;

int main() {
    int n;
    int num[10];
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> num[i];
    }

    int maxNum = 0, Count = 0;

    for(int i = 0; i < n; i++){
//  for leet code for(int i = 0; i < nums.size(); i++){
        if(num[i] == 1){
            Count++;
            if(Count > maxNum){
                maxNum = Count;
            }
        } else {
            Count = 0; // reset count when you hit 0
        }
    }
    cout << maxNum;
    return 0;
}
