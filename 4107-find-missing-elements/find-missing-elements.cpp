class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int min = *min_element(nums.begin() , nums.end());
        int max = *max_element(nums.begin() , nums.end());
        unordered_set<int> dup(nums.begin() , nums.end());
        vector<int>missing;
        for(int i = min+1 ; i < max ; i++){
            if(dup.count(i) == 0){
                missing.push_back(i);
            }
        }
        return missing;
    }
};