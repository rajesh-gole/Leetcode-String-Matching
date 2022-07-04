class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> ans;
        for(int &i : arr)
        {
            if(i == 0)
                ans.push_back(0);
            ans.push_back(i);
        }
        for(int i=0; i<arr.size();i++)
        {
            arr[i] = ans[i];
        }
    }
};