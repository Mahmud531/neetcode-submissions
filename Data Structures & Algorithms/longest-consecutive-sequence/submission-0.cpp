class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0){
            return 0;
        }
        unordered_set<int>st;
        int len = 1;
        for(auto &x:nums){
            st.insert(x);
        }
        
        for(int i = 0;i<n;i++){
            int curr = nums[i];
            if(st.find(curr-1)==st.end()){
                int currlen = 1;
                while(st.find(curr+1) != st.end()){
                    curr++;
                    currlen++;

                }
                len =  max(len,currlen);
            }
        }
        return len;
    }
};
