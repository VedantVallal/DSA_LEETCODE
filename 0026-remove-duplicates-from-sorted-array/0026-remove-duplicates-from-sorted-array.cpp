class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        for(int val:nums){
            s.insert(val);
        }
        int k=s.size();
        int j=0;
       for(auto x : s){
        nums[j]=x;
        j++;
       }
        for(int i=k;i<nums.size();i++){
            nums[i]=0;
        }
        return k;
    }
};