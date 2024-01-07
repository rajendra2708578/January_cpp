
// This code contain only the functional code no main and header files are included in this.


#define ll long long int
class Solution {
public:

    int numberOfArithmeticSlices(vector<int>& nums) {
        
     ll ans=0;
     int n=nums.size();
     unordered_map<ll,ll>mp[n];
     for(int i=1;i<n;i++)
     {
         for(int j=0;j<i;j++)
         {
             ll diff=(ll)nums[i]-(ll)nums[j];
             ll value=0;
             if(mp[j][diff]>0)
             {
                 value=mp[j][diff];
             }
             mp[i][diff]+=(value+1);
             ans+=value;
         }
     }
     return ans;
    }

};