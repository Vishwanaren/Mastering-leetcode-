class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int prefixsum = 0;
        map[0] = -1;
        for(int i = 0 ; i < nums.size() ; i++){
            prefixsum += nums[i];
            int rem = prefixsum % k;
            if(map.count(rem)){
                if(i - map[rem] >= 2){
                    return true;
                }
            }
            else{
                map[rem] = i;
            }
        }
        return false;
    }
};