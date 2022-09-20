typedef unsigned long long ull;
class Solution { // 72 ms, faster than 98.77%
public:
    int m, n, BASE = 101LL;
    vector<ull> hash1, hash2, POW;
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        m = nums1.size(), n = nums2.size();
        hash1.assign(m+1, 0), hash2.assign(n+1, 0), POW.assign(max(m, n) + 1, 1);
        for (int i = 0; i < max(m, n); ++i) POW[i+1] = POW[i] * BASE; // Compute POW of BASE
        for (int i = 0; i < m; ++i) hash1[i+1] = hash1[i] * BASE + nums1[i]; // Compute hashing values of nums1
        for (int i = 0; i < n; ++i) hash2[i+1] = hash2[i] * BASE + nums2[i]; // Compute hashing values of nums2

        int left = 1, right = min(m, n), ans = 0;
        while (left <= right) {
            int mid = (left + right) >> 1;
            if (foundSubArray(nums1, nums2, mid)) {
                ans = mid;
                left = mid + 1; // Try to expand size
            } else right = mid - 1; // Try to shrink size
        }
        return ans;
    }
    ull getHash(const vector<ull>& hash, int left, int right) { // 0-based indexing, right inclusive
        return hash[right+1] - hash[left] * POW[right - left + 1];
    }
    bool foundSubArray(vector<int>& nums1, vector<int>& nums2, int size) {
        unordered_map<ull, vector<int>> seen;
        for (int i = 0; i < m-size+1; ++i) {
            ull h = getHash(hash1, i, i + size - 1);
            seen[h].push_back(i);
        }
        for (int i = 0; i < n-size+1; ++i) {
            ull h = getHash(hash2, i, i + size - 1);
            if (!seen.count(h)) continue;
            for (int j : seen[h]) // Double check - This rarely happens when collision occurs -> No change in time complexity
                if (equal(nums1.begin()+j, nums1.begin()+j+size, nums2.begin()+i, nums2.begin()+i+size))
                    return true;
        }
        return false;
    }
};