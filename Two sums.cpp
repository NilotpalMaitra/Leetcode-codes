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
