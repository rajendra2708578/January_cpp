

//this code is functional code no header files or main function are included.

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
     int i=0,n=nums.size();
     while(i<nums.size())
     {
         if(nums[i]==i+1)
         i++;
         else if(nums[nums[i]-1]!=nums[i])
         {
             swap(nums[i],nums[nums[i]-1]);
         }
         else
         i++;
     }
     vector<int>vec;
     for(int i=0;i<n;i++)
     {
         if(i+1!=nums[i])
         {
             vec.push_back(nums[i]);
             vec.push_back(i+1);
         }
     }
     return vec;
    }
};