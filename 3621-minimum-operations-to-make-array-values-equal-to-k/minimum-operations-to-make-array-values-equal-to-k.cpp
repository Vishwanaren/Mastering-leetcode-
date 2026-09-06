class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int> map;
        for(int ch : nums){
            if(ch < k){
                return -1;
            }
            else if(ch > k) {
                map.insert(ch);
            }
        }
        return map.size();
    }
};