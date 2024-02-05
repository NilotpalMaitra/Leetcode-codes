class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char,int>secret_freq;
        unordered_map<char,int>guess_freq;

        int size =secret.size();

        int bulls =0;
        int cows =0;
        for (int i =0; i<size;; i++){
            if(secret[i] == guess[]){
                bulls++;
            }else{
                secret-freq[secret[i]]++;
            }
        }
        
    }
};
