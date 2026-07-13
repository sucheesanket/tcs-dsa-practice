class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        
        for (int i=0;i<strs.size();i++){
            string word=strs[i];
            string key=word;
            sort(key.begin(),key.end());
            map[key].push_back(word);
        }
        vector<vector<string>>ans;
        for (auto it:map){
            ans.push_back(it.second);
        }
        return ans;
    }
};

// tcs preparation
// leetcode 49