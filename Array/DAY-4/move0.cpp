Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]

*****solution********
#include <iostream>
using namespace std;

int main() {
    int n;
    int num[10];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }
    int positon=0;
    for(int i = 0; i < n; i++){
        if(num[i]!= 0){
           num[positon++]=num[i];
        }
    }
    for(int i = positon; i < n; i++) {
    num[i] = 0;
}
     for(int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }
    return 0;
}
//for leet code there is no return coz it's void

