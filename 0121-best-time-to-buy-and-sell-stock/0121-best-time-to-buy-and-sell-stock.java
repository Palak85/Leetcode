class Solution {
    public int maxProfit(int[] prices) {
        int n = prices.length;
        int maxprofit = 0;
        int min = prices[0];
        for(int i=0; i<n; i++){
            if(prices[i] < min){
                min = prices[i];
            }
            else{
                int profit = prices[i] - min;
                maxprofit = Math.max(profit, maxprofit);
            }
        }
        return maxprofit;
    }
}