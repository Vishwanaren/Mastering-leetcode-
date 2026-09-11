class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int count = 0;
        int prefixsum = 0;
        unordered_map<int,int> map;
        map[0] = 1;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] % 2 != 0){
                prefixsum++;
            }
            int target = prefixsum - k;
            if(map.find(target) != map.end()){
                count += map[target];
            }
            map[prefixsum]++;
        }
        return count;
    }
};