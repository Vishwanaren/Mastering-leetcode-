class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        int count = 0;
        int prefixsum = 0;
        map[0] = 1;
        for(int i = 0 ; i < nums.size() ; i++){
            prefixsum += nums[i];
            int rem = prefixsum % k;
            if(rem < 0){
                rem += k;
            }
            if(map.count(rem)){
                count += map[rem];
            }
            map[rem]++;
        }
        return count;
    }
};