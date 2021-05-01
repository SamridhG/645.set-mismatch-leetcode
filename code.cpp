class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       map<int,int>A;
        vector<int>B;
        for(int i=1;i<=nums.size();i++)
        {
            A[i]=0;
        }
        for(auto p:nums)
        {
            A[p]++;
        }
        for(auto z:A)
        {
            if(z.second==2)
            {
                B.push_back(z.first);
            }
        }
        for(auto k:A)
        {
            if(k.second==0)
            {
                B.push_back(k.first);
            }
        }
        return B;
        
    }
};
