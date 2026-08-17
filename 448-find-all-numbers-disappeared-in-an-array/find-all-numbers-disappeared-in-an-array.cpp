class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> myset(nums.begin() , nums.end());
        vector<int>vec;
        for(int i = 1 ; i <= nums.size() ; i++){
            if(myset.find(i) == myset.end()){
                vec.push_back(i);
            }
        }
        return vec;
    }
};