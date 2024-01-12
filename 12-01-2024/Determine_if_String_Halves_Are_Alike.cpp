

// this code contain only the functional code no header files and main function are include
class Solution {
public:

    bool halvesAreAlike(string s) {
        int count=0;
        unordered_map<char,int>mp;
mp['a']++;
mp['e']++;
mp['i']++;
mp['o']++;
mp['u']++;
mp['A']++;
mp['E']++;
mp['I']++;
mp['O']++;
mp['U']++;
    int sum=0;
       for(int i=0;i<s.size();i++)
       {
           if(mp[s[i]])
           {
               if(i<s.size()/2)
               sum++;

               count++;
           }
       }
       
        return (sum==count/2) && (count%2==0);
    }
};