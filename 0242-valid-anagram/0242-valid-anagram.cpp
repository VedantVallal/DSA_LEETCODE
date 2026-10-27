class Solution {
public:
    bool isAnagram(string s, string t) {
         unordered_map<char,int>f1;
            unordered_map<char,int>f2;
            if(s.length()!=t.length())return false;
            for(int i=0;i<s.length();i++){
                f1[s[i]]++;
                f2[t[i]]++;
            }
            
            for(int i=0;i<s.length();i++){
                if(f1[s[i]]!=f2[s[i]])return false;
            }
            return true;
    }
};