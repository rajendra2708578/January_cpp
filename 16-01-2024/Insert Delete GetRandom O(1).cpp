

//this code is a functional code not any header files or main function is included.

class RandomizedSet {
    unordered_map<int,int>mp;
    vector<int>value;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.count(val))
        return false;
        else
        {
            int index=value.size();
            mp[val]=index;
            value.push_back(val);
            return true;
        }
    }
    
    bool remove(int val) {
        
        if(mp.count(val))
        {
            int cur_index=mp[val];
            int max_index=value.size()-1;
            mp[value[max_index]]=cur_index;
            swap(value[max_index],value[cur_index]);
            mp.erase(val);
            value.pop_back();
            return true;
        }
        else
        return false;
    }
    
    int getRandom() {
        return value[rand()%(value.size())];
    }
};