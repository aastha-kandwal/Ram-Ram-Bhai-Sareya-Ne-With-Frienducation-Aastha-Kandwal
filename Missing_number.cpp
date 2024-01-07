class Solution {
public:
    int missingNumber(vector<int>& nums) {
        set<int> st;
        long long n=nums.size();
        for(long long i=0;i<n+1;i++){
            st.insert(i);
        }
        for(auto it:nums){
            st.erase(it);
        }
        return *st.begin();
    }
};
