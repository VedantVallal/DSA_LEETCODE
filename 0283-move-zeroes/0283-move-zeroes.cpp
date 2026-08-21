class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                j=i;
                while(j<n){
                    if(nums[j]!=0){
                    swap(nums[j],nums[i]);
                    break;
                    }
                    j++;
                }
            }
        }
    }
};