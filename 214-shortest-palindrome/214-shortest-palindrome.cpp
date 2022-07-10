class Solution {
    private:
    // using kmp algorithm
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
    string shortestPalindrome(string s) {
        string rev = s;
        reverse(rev.rbegin(), rev.rend());
        
        // "#" icluded for case like: aaaa#aaaa
        // max length of palindrom we can keep from the string itself 
        int len = find_lps(s + "#" + rev);
        
        return rev.substr(0, rev.length()-len) + s;
        
    }
};


/*
       ececaaa
->aaaecececaaa

        acecaaa
->    aaacecaaa
->
*/

//rajesh-gole