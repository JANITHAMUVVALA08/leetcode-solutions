class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return{};
        unordered_map<int, string> buttons = {
        {2, "abc"}, {3, "def"}, {4, "ghi"},
        {5, "jkl"}, {6, "mno"}, {7, "pqrs"},
        {8, "tuv"}, {9, "wxyz"}};
        vector<string>res={""};
        for(char d:digits){
            vector<string>temp;
        
        for(string s:res){
        for (char c:buttons[d-'0']){
            temp.push_back(s+c);
        }
        }
         res=temp;
        }
        return res;
        }
       
    
};
