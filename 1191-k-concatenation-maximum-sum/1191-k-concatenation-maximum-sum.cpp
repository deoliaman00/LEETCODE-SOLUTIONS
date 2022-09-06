class Solution {
public:
   // int kConcatenationMaxSum(vector<int>& arr, int k) {
        
        int kConcatenationMaxSum(vector<int>& arr, int k) {
    long long sub_sum = 0;   // temporary sum value for max_sum
    long long max_sum = 0;   // maximum subarray sum
    long long sum = 0;       // sum of one array
    long long M = 1e9+7;
    for(int i = 0 ; i < min(k, 2)*arr.size(); i++) {
        if(i < arr.size())
            sum += arr[i];
        
        if(sub_sum < 0)
            sub_sum = 0;
        sub_sum += arr[i%arr.size()];
        max_sum = max(sub_sum, max_sum);
    }
    
    if(k <= 2)
        return max(max_sum, (sum * k)) % M;
    
    if(sum > 0)
        return (max_sum + (sum * (k-2)) % M) % M;
    
    return max_sum % M;
}
    
};