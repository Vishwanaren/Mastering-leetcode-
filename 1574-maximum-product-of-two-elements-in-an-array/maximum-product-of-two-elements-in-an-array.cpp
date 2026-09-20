class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxproduct = INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){continue;}
                int current = (nums[i]-1)*(nums[j]-1);
                maxproduct = max(maxproduct,current);
            }
        }
        return maxproduct;
    }
};