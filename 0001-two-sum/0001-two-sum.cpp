class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            int a = nums[i];
            int second = target - a;
            if(mpp.find(second) != mpp.end()) {
                return {mpp[second], i};
            }
            mpp[a] = i;
        }
        
        return {}; 
    }
};
