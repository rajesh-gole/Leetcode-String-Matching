class Solution {
public:
    bool rotateString(string s, string goal) {
    
        if(s==goal)
            return true;
        if(s.size()!=goal.size())
            return false;
        int n=goal.size();
        while(n--)
        {
            if(s==goal)
                return true;
            s=s.substr(1) + s[0]; // copy substring from pos 1 to end and and A[0] to the end
        //cout<<s<<"\t";
        }
        return false;
    }
};





//rajesh-gole