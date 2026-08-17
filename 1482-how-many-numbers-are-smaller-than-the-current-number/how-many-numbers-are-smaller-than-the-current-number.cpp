class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();

        for(int i = 0 ; i < nums.size() ; i++){
            int cnt = 0;
            for(int j = 0 ; j < nums.size() ; j++){
                if(nums[i] > nums[j]){
                    cnt++;
                }
            }
            result.push_back(cnt);
        }
        return result;
    }
};