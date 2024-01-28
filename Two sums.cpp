class Solution {
public:
    vector<int> twoSum(vector<int>& nms, int target) {
        int n = nms.size();
        for (int i = 0; i<n-1;i++){
            for(int j = i +1; j< n;j++){
                if(nms[i]+nms[j]==target){
                    return{i,j};
                }
            }
        }
        return {};
    }
};


//Using hash map
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        int n = nums.size();

        // Build the hash table
        for (int i = 0; i < n; i++) {
            numMap[nums[i]] = i;
        }

        // Find the complement
        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];
            if (numMap.count(complement) && numMap[complement] != i) {
                return {i, numMap[complement]};
            }
        }

        return {}; // No solution found
    }
};
