class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        // Your code goes here
        map<int,int>mpp;
        vector<vector<int>>ans;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp) ans.push_back({it.first,it.second});
        return ans;

    }
};