class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int ns=s.length();
        int np=p.length();
        if(np>ns) return {};
        vector <int> freq1(26,0);
        vector <int> freq2(26,0);
        vector <int> result;
        for(int i=0;i<np;i++){
            freq1[p[i]-'a']++;
            freq2[s[i]-'a']++;
        }
        if(freq1==freq2){
            result.push_back(0);

        }
        for(int i=np;i<ns;i++){
            freq2[s[i-np]-'a']--;
            freq2[s[i]-'a']++;
            if(freq1==freq2){
                result.push_back(i-np+1);
            }
        }
        return result;
        
    }
};
//leetcode 438