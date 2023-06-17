class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> m1;
        for(auto e:nums){
            m1[e]++;
        }
        auto it = m1.begin();
        for(auto it:m1){
            if(it.second==1) return it.first;
        }
        return  0;
    }
};