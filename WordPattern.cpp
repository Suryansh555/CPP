#include<bits/stdc++.h>
using namespace std ; 

class Solution {
    
    string nextWord(const string &s, int &i){
        string ret = "";
        int n = s.size();
        while(i < n and s[i] != ' '){
            ret.push_back(s[i]);
            i++;
        }
        
        i++;
        
        return ret;
    }
    
public:
    bool wordPattern(string pattern, string s) {
        
        unordered_map<char, string> char_to_string;
        unordered_map<string, char> string_to_char;
        int idx = 0;
        
        int count_of_space = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' ')
                count_of_space++;
        }
        
        if(count_of_space != pattern.size() - 1)
            return false;
        
        for(int i = 0; i < pattern.size(); i++){
            
            string x = nextWord(s, idx);
            
            if(char_to_string.find(pattern[i]) != char_to_string.end() and char_to_string[pattern[i]] != x)
                return false;
            else if(string_to_char.find(x) != string_to_char.end() and string_to_char[x] != pattern[i])
                return false;
            else{
                char_to_string[pattern[i]] = x;
                string_to_char[x] = pattern[i];
            }
        }
        
        return true;
    }
};