
//this code contain only the functional code no header files and main function is inclduded in it.

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>ans;
        map<int,int>mp;
        for(auto it:nums)
        {
            mp[it]++;
        }

        bool pos=false;
        while(1)
        {
            vector<int>vec;
            pos=false;
            for(auto it:mp)
            {
                if(it.second>=1)
                {
                    vec.push_back(it.first);
                    mp[it.first]--;
                    pos=true;
                }
            }
            if(pos)
            ans.push_back(vec);
            else
            break;

        }
        return ans;
    }
};