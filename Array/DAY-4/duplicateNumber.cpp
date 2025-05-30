Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
Example 2:

Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).

*****solution****
#include <iostream>
using namespace std;

int removeDuplicant(int nums[],int n)//array and number of array & return k=unique number
{
 if(n==0) return 0;//if array has 0 element
 int k=1;//k is for next position where unique value will be inserted, 1 coz first value always unique

 for(int i=1;i<n;i++){//started from index 1 coz 0 is always unique
    if(nums[i]!=nums[k-1]){//current array is not equal to last element of new array(k-1)
        nums[k]=nums[i];
    k++;
 }
}
 return k;
}
int main() {
    int n;
    int nums[10];
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }


   int k=removeDuplicant(nums,n);//call the function keep unique num in k

   cout<< "unique:"<<k<<endl;
 for(int i=0;i<k;i++){//array changed in memory by overwriting unique value only
     cout<<nums[i];
     if(i<k-1)
        cout<< ", ";
 }

    return 0;
}

*******leetcode*****

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      if (nums.empty()) return 0;

        int k = 1; 

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[k - 1]) {
                nums[k] = nums[i]; 
                k++;
            }
        }

        return k;    
    }
};