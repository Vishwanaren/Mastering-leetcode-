class Solution {
public:
    int compress(vector<char>& chars) {
        int read = 0;
        int write = 0;
        while(read < chars.size()){
            int count = 0;
            char currentchar = chars[read];

            while(read < chars.size() && chars[read] == currentchar){
                count++;
                read++;
            }
            chars[write] = currentchar;
            write++;
            if(count > 1){
                string countstr = to_string(count);
                for(char num : countstr){
                    chars[write] = num;
                    write++;
                }
            }
        }
        return write;
    }
};