class Solution {
public:
void check(int n,string s,vector<string>&ans){
    if(s.size()==n){ans.push_back(s);return;}
    check(n,s+'1',ans);
    if(s.empty()||s.back()=='1'){check(n,s+'0',ans);}
}
    vector<string> validStrings(int n) {
        vector<string>ans;
        check(n,"",ans);
        return ans;
        
    }
};