class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int count,min_c=INT_MAX;
        string st=strs[0];

        for(int i=0;i<strs.size();i++){
            string cs=strs[i];
            count=0;
            for(int j=0;j<min(st.length(),cs.length());j++){
                if(cs[j]==st[j]){
                 count++;
                }else break;
            }
                 min_c=min(min_c,count);
            if(count==0)break;
        }
        return st.substr(0,min_c);
    }
};