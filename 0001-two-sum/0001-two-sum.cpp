class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> num_Map;

        for(int i = 0; i<= nums.size(); i++)
        {
            int temp = target - nums[i];

            if(num_Map.find(temp) != num_Map.end())
            {
                return {num_Map[temp],i};
            }

            num_Map[nums[i]] = i;
        }
        return {};
    }
};