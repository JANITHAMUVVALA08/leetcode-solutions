class Solution {
public:
    int romanToInt(string s) {
        std::unordered_map<char,int>romanvalues={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int total=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(i<n-1&&romanvalues[s[i]]<romanvalues[s[i+1]]){
                total-=romanvalues[s[i]];
            }
            else{
                total+=romanvalues[s[i]];
            }
        }
       return total; 
    }
    
};
