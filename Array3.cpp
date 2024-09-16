class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {
            int new_val = target - nums[i];
            if (mp.find(new_val) != mp.end()) {
                return {mp[new_val], i};
            }
            mp.insert({nums[i], i});
        }
        return {};
    }
};
