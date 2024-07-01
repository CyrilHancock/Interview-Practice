class Solution {
public:
    bool isAnagram(string s, string t) {
    //    sort(s.begin(), s.end());
    //    sort(t.begin(), t.end());
    //     return s==t;
    if(s.size()!=t.size()){
        return false;
    }
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i] -'a' + 1]++;
        hash[t[i] -'a'+ 1]--;
    }
    for(int i=0;i<26;i++){
        if(hash[i]!=0){
            return false;
        }
    }
    return true;
    }
};