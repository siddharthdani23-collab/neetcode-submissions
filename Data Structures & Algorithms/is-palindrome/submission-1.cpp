class Solution {
public:
    bool isPalindrome(string s) {
        int pt1=0,pt2=s.length()-1;
        while(pt1<pt2)
        {
            while(!isalnum(s[pt1])&&pt1<pt2) pt1++;
            while(!isalnum(s[pt2])&&pt1<pt2) pt2--;
            if(tolower(s[pt1])!=tolower(s[pt2])) return false;
            pt1++;
            pt2--;
        }
        return true;
    }
};
