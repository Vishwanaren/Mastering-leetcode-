class Solution {
public:
    bool isPalindromic(string s) {
        string binary_str = "";
        for(char c : s){
            binary_str += bitset<8>(c).to_string();
        }
        int n = binary_str.length();
        int left = 0;
        int right = n-1;
        while(left < right){
            if(binary_str[left] != binary_str[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
        }
    };