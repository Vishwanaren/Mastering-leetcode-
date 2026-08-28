class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int distance = 0;
        int count = 0;
        while(mainTank > 0){
            distance += 10;
            mainTank-- ;
            count++;
            if(count % 5 == 0 && additionalTank > 0){
                additionalTank--;
                mainTank++;
            }
        }
        return distance;
    }
};