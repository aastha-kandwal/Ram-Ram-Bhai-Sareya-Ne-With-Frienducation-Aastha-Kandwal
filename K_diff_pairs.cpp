class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        map<int,int> a;
        for(int i=0;i<nums.size();i++){
            a[nums[i]]++;
        }   
        int ans=0;
        for(auto x:a){
            if(k==0){   
                if(x.second>1){
                    ans++;
                } 
            }
            else if(a.find(x.first+k)!=a.end()){
                ans++;
            }     
        }
        return ans;
    }
};
