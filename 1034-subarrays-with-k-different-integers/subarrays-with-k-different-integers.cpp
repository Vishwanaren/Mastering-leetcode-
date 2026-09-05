class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }
    int atmost(vector<int>& nums,int k){
        unordered_map<int,int>map;
        int count = 0;
        int l =0;
        for(int r = 0 ; r < nums.size() ; r++){
            map[nums[r]]++;

            while(map.size() > k){
                map[nums[l]]--;
                if(map[nums[l]] == 0){
                    map.erase(nums[l]);
                }
                l++;
            }
            count += r-l+1;
        }
        return count;
    }
};