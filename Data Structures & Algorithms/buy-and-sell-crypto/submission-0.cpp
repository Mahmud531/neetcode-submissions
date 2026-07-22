class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int l = 0;

        for(int r = 1;r<prices.size();r++){

            if(prices[l]>prices[r]) l = r;

            ans = max(ans,prices[r]-prices[l]);
        }

        return ans;

    }
};
