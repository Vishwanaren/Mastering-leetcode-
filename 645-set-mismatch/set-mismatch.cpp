class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int duplicate = -1;
        long long actual_sum = 0;
        unordered_set<int>seen;
        long long n = nums.size();

        for(int num : nums){
            if(seen.count(num)){
                duplicate = num;
            }
            seen.insert(num);
            actual_sum += num;
        }
        long long expected_sum = n * (n+1) / 2;
        int missing = expected_sum - (actual_sum - duplicate);
        return {duplicate , missing};
    }
};