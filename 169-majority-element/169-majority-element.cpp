class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int, int> cc;
        for (int num : nums) {
            if (++cc[num] > nums.size() / 2) {
                return num;
            }
        }
        return 0;
    }
};