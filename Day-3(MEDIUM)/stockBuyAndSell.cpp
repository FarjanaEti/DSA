You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Input: prices = [7,6,4,3,1]
Output: 0
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

********Solution******
class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int minPrice = prices[0];
            int maxProfit = 0;
            for (int i = 1; i < prices.size(); i++) {

        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else {
            int currentProfit = prices[i] - minPrice;
            if (currentProfit > maxProfit) {
                maxProfit = currentProfit;
            }
        }
    }
    return maxProfit;
    }
};

******code blocks********

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,profit;
    cin >> n;
   // vector<vector<int>> matrix(n, vector<int>(n)); for 2d array
      vector<int> prices(n);
    for (int i = 0; i < n; i++)
            cin >> prices[i];
            int minPrice = prices[0];
            int maxProfit = 0;

          for (int i = 1; i < n; i++) {
              // update minPrice if current price is smaller
            if(prices[i]<minPrice)
               {
                   minPrice = prices[i];
               }
            else{
                //update max profit
                int currentProfit = prices[i] - minPrice;
               if (currentProfit > maxProfit) {
                maxProfit = currentProfit;
            }
            }
    }
        cout<<maxProfit;

    return 0;
    }
