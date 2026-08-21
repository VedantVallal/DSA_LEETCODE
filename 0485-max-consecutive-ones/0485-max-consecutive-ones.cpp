class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max1=INT_MIN;
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)
            c++;
            if(nums[i]!=1){
                max1=max(max1,c);
                c=0;
            }
        }
        if(c>max1)return c;
        return max1;
    }
};