class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        unordered_map<int,int>freq;
        int need=0;
        for(int i=0;i<nums.size();i++){
            need=t-nums[i];
            if(freq.count(need)){
                return {i,freq[need]};
            }
            freq[nums[i]]=i;
        }
        return {0,0};
    }
};