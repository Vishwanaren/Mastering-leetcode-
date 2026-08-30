class Solution {
public:
    int findClosest(int x, int y, int z) {
        int xdist = abs(z-x);
        int ydist = abs(z-y);
        if(xdist < ydist){
            return 1;
        }
        else if(ydist < xdist){
            return 2;
        }
        return 0;
    }
};