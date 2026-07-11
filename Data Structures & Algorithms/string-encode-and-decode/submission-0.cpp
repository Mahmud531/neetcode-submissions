class Solution {
public:

    string encode(vector<string>& strs) {
        string temp = "";
        for(string s:strs){
            temp += to_string(s.size())+"#" + s;
        }
        return temp;
    }

    vector<string> decode(string s) {

        vector<string>ans;
        int i = 0;
        while(i<s.size()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            string ss = s.substr(i,j-i);
            int len = stoi(ss);

            j++;
            ans.push_back(s.substr(j,len));
            i = j+len;
        }
        return ans;
    }
};
