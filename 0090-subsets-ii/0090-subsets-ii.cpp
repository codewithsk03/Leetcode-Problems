class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> result = {{}};

        int start = 0;

        for(int i = 0; i < nums.size(); i++) {
            int size = result.size();

            if(i > 0 && nums[i] == nums[i-1]) {
                start = start;
            } else {
                start = 0;
            }

            for(int j = start; j < size; j++) {
                vector<int> subset = result[j];
                subset.push_back(nums[i]);
                result.push_back(subset);
            }

            start = size;
        }

        return result;
    }
};