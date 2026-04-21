class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bprice = 101;
        int sprice = 0;
        int profit = 0;
        for(int i = 0; i < prices.size()-1; i++){
            if(prices[i] < prices[i+1] && prices[i] <= bprice && prices[i+1]-prices[i] >= profit){
                bprice = prices[i];
                sprice = prices[i+1];
            }
            else if(prices[i+1] >= sprice){
                sprice = prices[i+1];
            }
            profit = sprice - bprice;
            if(profit<=0){
                profit = 0;
            }
        }
        profit = sprice - bprice;
        return (profit >= 0) ? profit : 0;

    }
};
