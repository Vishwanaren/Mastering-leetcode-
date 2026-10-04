class Solution {
public:
    string generateTheString(int n) {
        string result = "";
        if(n%2==0){
            while(n>1){
                result+='a';
                n--;
            }
            result+='b';
        }
        else{
            while(n>0){
                result+='a';
                n--;
            }
        }
        return result;
    }
};