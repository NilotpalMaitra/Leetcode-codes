class Solution {
public:
    bool isPalindrome(int x) {
        string step = to_string(x);
        int n = step.length();
        for(int i = 0 ; i < n ; i++){
            if(step[i] != step[n-1 -i]){
                return false; 
            }

         }
    return true;
    }

};