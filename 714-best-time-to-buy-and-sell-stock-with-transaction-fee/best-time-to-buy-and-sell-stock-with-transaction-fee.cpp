class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int buycost = prices[0] + fee;
        int profit = 0;

        for(int i = 0 ; i < prices.size() ; i++){
            if(buycost > prices[i] + fee){
                buycost = prices[i] + fee;
            }
            else if(prices[i] > buycost){
                profit += prices[i] - buycost;

                buycost = prices[i];
            }
        }
        return profit;
    }
};