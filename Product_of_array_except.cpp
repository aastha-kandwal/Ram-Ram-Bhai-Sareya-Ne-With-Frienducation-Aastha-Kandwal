class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> vc;
        int p=1;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                cnt++;
            }
            else{
                p=p*nums[i];
            }
            
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0 && cnt>1){
                vc.emplace_back(0);
            }
            else if(nums[i]==0 && cnt==1){
                vc.emplace_back(p);
            }
            else if(nums[i]!=0 && cnt>0){
                vc.emplace_back(0);
            }
            else{
                vc.emplace_back(p/nums[i]);
            }
            
        }
        return vc;
    }
};
