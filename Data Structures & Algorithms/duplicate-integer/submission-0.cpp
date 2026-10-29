class Solution {
public:
    unordered_set <int> my_set; 
    bool hasDuplicate(vector<int>& nums) {
        for (int item : nums)
        {
            if(my_set.contains(item))
            {
                return true;
            }
            my_set.insert(item);
        }
        return false;
    }
};