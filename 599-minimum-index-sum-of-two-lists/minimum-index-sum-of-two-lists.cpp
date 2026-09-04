class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string , int> map;
        vector<string> result;
        int minsum = INT_MAX;
        for(int i = 0 ; i < list1.size() ; i++){
            map[list1[i]] = i;
        }

        for(int j = 0 ; j < list2.size() ; j++){
            string current_str = list2[j];
            if(map.find(current_str) != map.end()){
                int current_sum = map[current_str] + j;
        
                if(current_sum < minsum){
                    minsum = current_sum;
                    result.clear();
                    result.push_back(current_str);
                }
                else if(current_sum == minsum){
                    result.push_back(current_str);
                }
            }
        }
        return result;
    }
};