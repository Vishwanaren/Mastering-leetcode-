class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        long long chef_free_time = 0;
        long long total_time = 0;

        for(auto& c : customers){
            long long arrival = c[0];
            long long cook_time = c[1];

            chef_free_time = max(chef_free_time,arrival) + cook_time;
            total_time += (chef_free_time - arrival);
        }
        return (double)total_time / customers.size();
    }
};