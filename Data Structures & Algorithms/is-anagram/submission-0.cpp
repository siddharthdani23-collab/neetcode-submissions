class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        if(s.length()!=t.length()) return false;
        for(int i=0;i<s.length();i++)
        {
            if(mp.find(s[i])!=mp.end()) mp[s[i]]++;
            else mp[s[i]]=1;
        }
        for(int i=0;i<t.length();i++)
        {
            if(mp[t[i]]>0) 
            {
                mp[t[i]]--;
            }
            else return false;
        }
        return true;
    }
};
