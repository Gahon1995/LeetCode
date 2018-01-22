
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = 0,j=0;
        unordered_map<char,int> map ;
        for(int i=0;i<s.size();++i){
            if(map.find(s[i])!=map.end()){
                j=max(map[s[i]],j);
            }
            len = max(len,i-j+1);
            map[s[i]]=i+1;
        }
        return len;
    }

    int lengthOfLongestSubstring1(string s) {
        vector<int> dict(256, -1);
        int maxLen = 0, start = -1;
        for (int i = 0; i != s.length(); i++) {
            if (dict[s[i]] > start)
                start = dict[s[i]];
            dict[s[i]] = i;
            maxLen = max(maxLen, i - start);
        }
        return maxLen;
    }
};