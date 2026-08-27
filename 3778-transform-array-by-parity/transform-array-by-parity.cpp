class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int zerocount = 0;
        int onecount = 0;
        for(int x : nums){
            if(x % 2 == 0){
                zerocount++;
            }
            else{onecount++;}
        }
        for(int i = 0 ; i < zerocount ; i++){
            nums[i] = 0;
        }
        for(int i = zerocount ; i < nums.size() ; i++){
            nums[i] = 1;
        }
        return nums;
    }
};