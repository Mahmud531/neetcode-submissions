class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();

        if(n==0) return 0;

        int ans = 1;
        int l  = 0;
        
        unordered_map<char,int>mp;
        for(int r = 0;r<n;r++){
            mp[s[r]]++;
            
            while(mp[s[r]]>1){
                mp[s[l]]--;
                l++;
            }

            ans = max(ans, r-l+1);
            
        }
        return ans;
    }
};
