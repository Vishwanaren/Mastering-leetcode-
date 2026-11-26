class Solution {
public:
    bool canAliceWin(int n) {
        int take=10;
        int turns=0;
        while(take<=n){
            n-=take;
            take--;
            turns++;
        }
        return take%2==1;
    }
};