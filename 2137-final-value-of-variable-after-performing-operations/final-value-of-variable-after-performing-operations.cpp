class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int result = 0;
        for(string ch : operations){
            if(ch == "--X" || ch == "X--"){
                result -= 1;
            }
            else{
                result += 1;
            }
        }
        return result;
    }
};