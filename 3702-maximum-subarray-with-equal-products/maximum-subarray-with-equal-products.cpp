class Solution {
public:
    int maxLength(vector<int>& nums) {
        int maxlen=0;
        for(int l=0;l<nums.size();l++){
            long long prod=1;
            long long g=0;
            long long lc=1;
            for(int r=l;r<nums.size();r++){
                prod*=nums[r];
                lc=lcm(lc,(long long)nums[r]);
                g=gcd(g,(long long)nums[r]);
                if(prod>25200){break;}
                if(prod==lc*g){
                    maxlen=max(maxlen,r-l+1);
                }
            }
        }
        return maxlen;
    }
};