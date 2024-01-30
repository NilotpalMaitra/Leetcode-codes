class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
       
        unordered_map <int,int>counts; 
        priority_queue<pair<int,int>>maxi;
       
        for(int i=0;i<nums.size();i++){
            counts[nums[i]]++;
        }

       
        while(!counts.empty()){
            maxi.push({counts.begin()->second,counts.begin()->first});
            counts.erase(counts.begin());
        }

        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(maxi.top().second);
            maxi.pop();
        }
        return ans;
    }
};
