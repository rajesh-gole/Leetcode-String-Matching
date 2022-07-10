class Solution {
private:
    // using KMP algorithm
    int find_lps(string str) {
        int n = str.length();
        vector<int> lps(n, 0);
        
        int len = 0, i = 1; 
        while(i < n) { 
            if(str[len] == str[i]) {
                lps[i++] = ++len;
            } else {
                if(len != 0)
                    len = lps[len-1];
                else 
                    lps[i++] = 0;
            }
        }
        
        return lps[n-1];
    }
public:
    string longestPrefix(string s) {
        int len = find_lps(s);
        //cout<<len;
        return s.substr(0,len);
    }
};