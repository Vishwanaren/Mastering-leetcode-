class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        map[0] = 1;
        int count = 0;
        int prefixsum = 0;
        for(int num : nums){
            prefixsum += num;
            int target = prefixsum - k;
            if(map.find(target) != map.end()){
                count += map[target];
            }
            map[prefixsum]++;
        }
        return count;
    }
};