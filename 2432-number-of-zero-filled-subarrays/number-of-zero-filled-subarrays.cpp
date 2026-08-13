class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long zerocount = 0;
        long long result = 0;

        for(int num : nums){
            if(num == 0){
                zerocount++;
                result += zerocount;
            }
            else{
                zerocount = 0;
            }
        }
        return result;
    }
};