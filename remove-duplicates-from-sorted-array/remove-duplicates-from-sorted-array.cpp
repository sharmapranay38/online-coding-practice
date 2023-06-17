class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> temp;
        for(int i=0;i<nums.size();i++){
            if(find(temp.begin(),temp.end(),nums[i])==temp.end()) temp.push_back(nums[i]);
        }
        nums = temp;
        return temp.size();
    }
};