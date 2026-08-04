class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        int max_val= *max_element(nums.begin(),nums.end());
        int min_val= *min_element(nums.begin(),nums.end());
        unordered_set<int> present_set(nums.begin(),nums.end());
        vector<int> ans;
        for(int i = min_val; i<=max_val; ++i){
            if(present_set.find(i)==present_set.end()){
                ans.push_back(i);
            }

        }

        return ans;
        
        
    }
};