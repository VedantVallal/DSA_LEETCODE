class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n=nums.size()-1;
       k=k%(n+1);
       int i=0,j=n-k;
       
       while(i<j){
        swap(nums[i],nums[j]);
        i++;
        j--;
       }
       i=n-k+1,j=n;
       while(i<j){
        swap(nums[i],nums[j]);
        i++;
        j--;
       }
       i=0;j=n;
        while(i<j){
        swap(nums[i],nums[j]);
        i++;
        j--;
       }
    }
};