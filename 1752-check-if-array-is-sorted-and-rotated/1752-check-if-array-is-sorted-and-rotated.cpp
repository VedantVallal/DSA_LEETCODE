class Solution {
public:
    bool check(vector<int>& nums) {
        int first=nums[0];
        int mid=0;
        int c=0;
        for(int i=0;i+1<nums.size();i++){
            if(nums[i]>nums[i+1]){
                mid=i+1;
                c++;
                
            }
        }
        if(mid==0)return true;
        else if(c>1)return false;
        for(int i=mid;i<nums.size();i++){
            if(nums[i]>first){
                return false;
            }
        }
        return true;
    }
};