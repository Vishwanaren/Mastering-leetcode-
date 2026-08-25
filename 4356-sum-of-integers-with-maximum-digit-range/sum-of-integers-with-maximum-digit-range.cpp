class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int maxrange = 0;
        int n = nums.size();
        vector <int> ranges(n);

        for(int i = 0 ; i < n ; i++){
            int temp = nums[i];
            int maxno = 0;
            int minno = 9;

            while(temp > 0){
                int digit = temp%10;
                maxno = max(maxno , digit);
                minno = min(minno , digit);
                temp /= 10;
            }
            ranges[i] = maxno - minno;
            maxrange = max(maxrange , ranges[i]);
        }
        int totalsum = 0;
        for(int i = 0 ; i < n ; i++){
            if(ranges[i] == maxrange){
                totalsum += nums[i];
            }
        }
        return totalsum;
    }
};