Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,1]

Output: 1

Example 2:

Input: nums = [4,1,2,1,2]

Output: 4

***solution*******
#include <iostream>
using namespace std;

int main() {
    int n;
    int num[10];
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> num[i];
    }


    int single=0;
    for(int i = 0; i < n; i++){
      // linear runtime complexity and use only constant extra space.      
     single=single^num[i];//XOR same value 0 different 1
    }
    cout<< single;
    return 0;
}

