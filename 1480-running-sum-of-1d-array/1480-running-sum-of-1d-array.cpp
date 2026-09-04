class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ps;
        int sum=0;
        for(auto it:nums){
            sum+=it;
            ps.push_back(sum);
        }
        return ps;
    }
};