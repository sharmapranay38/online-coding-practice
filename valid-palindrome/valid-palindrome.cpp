class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> v,b;
        for(auto i:s){
            if(isalpha(i)||isdigit(i)) v.push_back(tolower(i));
        }
        b = v;
        reverse(v.begin(),v.end());
        // for(auto it:v) cout<<it<<" ";
        if( v == b) return true;
        return false;
        
    }
};