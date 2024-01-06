class Solution {
public:
 vector<int> twoSum(vector<int>& nums, int target) {
 unordered_map<int, int> st;
 for (int i = 0; i < nums.size(); i++) {
 int cur = nums[i];
 int left = target - cur;
 if (st.find(left) != st.end()) {
 return {st[left], i};
 }
 st[cur] = i;
 }
 return {};
 }
};
