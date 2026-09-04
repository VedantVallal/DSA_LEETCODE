class NumArray {
public:
        map<int,int>ps;
    NumArray(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
        
            sum+=nums[i];
            ps[i]=sum;
        }
    }
    
    int sumRange(int left, int right) {
         int s=0;
           int x=left;
            int y=right;
            s=ps[y]-ps[x-1];
            return s;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */