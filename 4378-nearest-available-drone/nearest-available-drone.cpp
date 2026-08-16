class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int min_dist = INT_MAX;
        int best_index = -1;

        for(int i = 0 ; i < drones.size() ; i++){
            int dist = abs(drones[i][0] - target[0]) + abs(drones[i][1] - target[1]);
            int range = drones[i][2];

            if(dist <= range && dist < min_dist){
            min_dist = dist;
            best_index = i;
            }
        }
        return best_index;
    }
};