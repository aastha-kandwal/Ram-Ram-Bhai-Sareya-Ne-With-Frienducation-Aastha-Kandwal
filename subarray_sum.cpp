class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        map<int,int> st;
        st[0]=1;
        int prefixsum=0;
        for(int i=0;i<n;i++){
            prefixsum+=nums[i];
            int diff=prefixsum-k;
            ans+=st[diff];
            st[prefixsum]++;
        }
        return ans;
    }
};
