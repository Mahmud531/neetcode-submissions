class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int>mp;

        for(auto &x:nums){
            mp[x]++;
        }
        vector<pair<int,int>>freq;
        
        for(auto it = mp.begin(); it != mp.end(); it++){
            freq.push_back({it->first,it->second});
        }

        /*
            for(auto &it : mp){
                freq.push_back(it);
           }
        */

        vector<int>ans;
        
        sort(freq.begin(),freq.end(),[](const auto &a, const auto &b){
            return a.second>b.second;
        });

        for(int i = 0;i<k && i<freq.size();i++){
            ans.push_back(freq[i].first);
        }


        return ans;
    }
};
