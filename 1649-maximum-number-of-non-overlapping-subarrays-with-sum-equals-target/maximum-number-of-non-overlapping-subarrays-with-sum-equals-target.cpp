class Solution {
public:
    int maxNonOverlapping(vector<int>& nums, int target) {
        unordered_set<int>seen;
        int prefixsum = 0;
        seen.insert(0);
        int count = 0;
        for(int num : nums){
            prefixsum += num;
            if(seen.count(prefixsum - target)){
                count++;
                seen.clear();
                seen.insert(0);
                prefixsum = 0;
            }
            else{
                seen.insert(prefixsum);
            }
        }
        return count;
    }
};