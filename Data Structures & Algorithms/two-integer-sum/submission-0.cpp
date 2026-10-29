class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> my_map;
        vector <int> result;

        for(int item = 0; item < nums.size(); item++)
        {   
            int rest_val = target - nums[item];
            if(my_map.contains(rest_val))
            {
                result.push_back(my_map[rest_val]);
                result.push_back(item);
                return result;
            }
            my_map[nums[item]] = item;

        }
        return result;
    }
};
