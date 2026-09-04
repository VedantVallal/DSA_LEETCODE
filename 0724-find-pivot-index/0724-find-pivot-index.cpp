class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n=nums.size()-1;
        vector<int>ps;
        int sum=0;
        for(auto val:nums){
            sum+=val;
            ps.push_back(sum);
        }
            if(ps[0]==ps[n])return 0;
        for(int i=0;i<nums.size()-1;i++){
            if((ps[n]-ps[i])==ps[i+1])return i+1;
        }
        return -1;
    }
};