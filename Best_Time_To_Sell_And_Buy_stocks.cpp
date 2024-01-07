class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int n=prices.size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n && prices[j]>prices[i];j++){
                ans=max(ans,prices[j]-prices[i]);
            }
        }
        return ans;
    }
};
