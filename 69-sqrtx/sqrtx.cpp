class Solution {
public:
    int mySqrt(int x) {
        int l=0,r=x/2;
        if(x<2){return x;}
        while(l<=r){
            long long mid=l+(r-l)/2;
            long long square=mid*mid;
            if(square==x){return mid;}
            else if(square<x){l=mid+1;}
            else{r=mid-1;}
        }
        return r;
    }
};