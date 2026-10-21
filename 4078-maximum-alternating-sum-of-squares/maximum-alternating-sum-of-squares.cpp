class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        vector<long long>sq(n);
        for(int i=0;i<n;i++){
            sq[i]=(1LL*nums[i]*nums[i]);
        }
        long long ans=0;
        int negcnt=n/2;
        sort(sq.begin(),sq.end());
        for(int i=0;i<negcnt;i++){
            ans-=sq[i];
        }
        for(int i=negcnt;i<n;i++){
            ans+=sq[i];
        }
        return ans;
    }
};