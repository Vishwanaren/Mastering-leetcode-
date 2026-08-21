class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int posindex = 0;
        int negindex = 1;

        for(int x : nums){
            if(x > 0){
                result[posindex] = x;
                posindex += 2;
            }
            else{
                result[negindex] = x;
                negindex += 2;
            }
        }
        return result;
    }
};