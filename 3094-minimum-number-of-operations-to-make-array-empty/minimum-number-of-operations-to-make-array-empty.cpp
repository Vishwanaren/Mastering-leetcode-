class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        int totalcount=0;
        for(auto& [num,count]:freq){
            if(count==1){
                return -1;
            }
            else{
                totalcount+=(count+2)/3;
            }
        }
        return totalcount;
    }
};