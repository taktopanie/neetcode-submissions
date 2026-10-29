class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char, int> my_map;
        for(auto item : s)
        {
            my_map[item] += 1;
        }
        for(auto item : t)
        {
            my_map[item] -= 1;
            if(my_map[item] == 0)
            {
                my_map.erase(item);
            }
        }
        return (my_map.empty());
    }
};
