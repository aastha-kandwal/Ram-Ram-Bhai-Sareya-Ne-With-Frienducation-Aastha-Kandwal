class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> vc;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                vc.emplace_back(s[i]);
            }
            else if(s[i]>='A' && s[i]<='Z'){
                vc.emplace_back(tolower(s[i]));
            }
            else if(s[i]>='0' && s[i]<='9'){
                vc.emplace_back(s[i]);
            }
        }
                          
        for(int i=0;i<vc.size();i++){
            if(vc[i]!=vc[vc.size()-i-1]){
                return false;
            }
        }
        return true;
    }
};
