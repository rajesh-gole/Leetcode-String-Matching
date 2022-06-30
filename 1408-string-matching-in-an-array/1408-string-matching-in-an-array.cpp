class Solution {
    
// We need this function to define how to sort
// the vector. We will pass this function into the
// third parameter and it will tell it to sort descendingly.
    
  static bool wayToSort(const string &a, const string &b)
    {
        return a.size() < b.size();
    }
public:
    vector<string> stringMatching(vector<string>& words) {
        
 // Do not include the () when you call wayToSort
// It must be passed as a function pointer or function object
        
        sort(words.begin(), words.end(), wayToSort);
        vector<string> res;
        for(int i = 0; i < words.size(); i++)
        {
            for(int j = i + 1; j < words.size(); j++)
            {
                if(words[j].find(words[i]) != -1)
                {
                    res.push_back(words[i]);
                    break;
                }
            }
        }
        return res;
    }
};