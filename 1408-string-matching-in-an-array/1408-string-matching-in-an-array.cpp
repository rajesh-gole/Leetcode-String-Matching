class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> res;
            for(auto st:words)
            {
                    for(auto wo:words)
                    {
                            if(st.length()< wo.length() && wo.find(st)!=string::npos)
                            {
                                   res.push_back(st);
                                    break;
                            }
                    }
            }
            return res;
    }
};