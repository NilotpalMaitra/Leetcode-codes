class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Create an unordered map to store groups of anagrams
        unordered_map<string, vector<string>> mp;
        
        // Iterate through each string in the input vector
        for(auto x: strs){
            // Create a copy of the string and sort its characters
            string word = x;
            sort(word.begin(), word.end());
            
            // Add the original string to the corresponding group in the map
            mp[word].push_back(x);
        }
        
        // Create a 2D vector to store the final result
        vector<vector<string>> ans;
        
        // Iterate through the map and push each group of anagrams to the result vector
        for(auto x: mp){
            ans.push_back(x.second);
        }
        
        // Return the final result
        return ans;
    }
};
