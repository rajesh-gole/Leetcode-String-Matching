class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> res;
            for(int i=0;i<words.size();i++)
            {
                    for(int j=0;j<words.size();j++)
                    {
                            if(i!=j)
                            {
                                   int fou=words[j].find(words[i]); // mistake : fou=words[i].find(words[j]);
                                    if(fou!=string::npos){
                                            res.push_back(words[i]); //mistake : res.push_back(words[j]);
                                    break;}
                            }
                    }
            }
            return res;
    }
};