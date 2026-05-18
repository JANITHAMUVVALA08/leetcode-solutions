class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>result;
        unordered_set<int>seen(nums.begin(),nums.end());
        for(int i=1;i<=n;i++){
             if(seen.find(i)==seen.end()){
                result.push_back(i);
             }

        }
       return result;

    }
};
