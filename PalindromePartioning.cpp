class Solution {
public:
    //returns true if s is palindrom
    bool isPalindrom(string &s){
        int l=0,r=s.length()-1;
        while(l<r){
            if(s[l++]!=s[r--]) return false;
        }
        return true;
    }
    void recur(string s,int i,vector<string>& v,vector<vector<string>>& ans){
        if(i==s.length() && v.size()>0){
            ans.push_back(v);
            return;
        }
        string str = "";
        for(int j=i;j<s.length();++j){
            str+=s[j];
            if(isPalindrom(str)){
                v.push_back(str);
                recur(s,j+1,v,ans);
                v.pop_back();     //backtrack
            }
        }
    }
    vector<vector<string>> partition(string s) {
        if(s.length()==0) return {};
        vector<vector<string>> ans;
        vector<string> v;
        recur(s,0,v,ans);
        return ans;
    }
};