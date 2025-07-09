class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>s;
        for(auto u: nums){
            s.insert(u);
        }
        return(s.size()!=nums.size());
        
    } 
};