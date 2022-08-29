class Solution {
public:
    void reverseString(vector<char>& s) {
        //reverse(s.begin(),s.end());
        int n=s.size();
        for(int i=0;i<s.size()/2;i++){
            swap(s[i],s[n-i-1]);
        }
            }
};
