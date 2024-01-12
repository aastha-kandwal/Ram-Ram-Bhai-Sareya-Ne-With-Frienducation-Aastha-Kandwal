class Solution {
public:
    bool isAnagram(string s, string t) {
        multiset<char> st1;
        multiset<char> st2;
        for(auto i:s){
            st1.insert(i);
        }
        for(auto i:t){
            st2.insert(i);
        }
        if(st1.size()!=st2.size()){
            return false;
        }
        if(st1!=st2){
            return false;
        }
        return true;
    }
};
