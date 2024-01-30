class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Create a hash map to store the frequency of each element
        unordered_map<int, int> counts;
        
        // Create a max heap to store elements with their frequencies
        priority_queue<pair<int, int>> maxi;
       
        // Count the occurrences of each element in nums
        for(int i = 0; i < nums.size(); i++) {
            counts[nums[i]]++;
        }

        // Transfer elements and their frequencies from the hash map to the max heap
        while (!counts.empty()) {
            maxi.push({counts.begin()->second, counts.begin()->first});
            counts.erase(counts.begin());
        }

        // Retrieve the top k elements from the max heap
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(maxi.top().second);
            maxi.pop();
        }

        return ans;
    }
};
