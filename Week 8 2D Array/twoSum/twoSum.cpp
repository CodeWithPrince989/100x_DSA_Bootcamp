// ------------------------- x x x  By Brute Force Method  x x x----------------------------------------

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j]==target){
                    return {i, j};
                }
            }
        }
        return {};
    }
};


//-------------------------------- BY Hash Map Approach ($O(n)$ Time, $O(n)$ Space) -----------------------------------------------------

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp; // Stores value -> index
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        
        // Lookup takes O(1) average time
        if (mp.count(complement)) {
            return {mp[complement], i}; 
        }
        
        mp[nums[i]] = i; // Save current number for future lookups
    }
    return {};
}

// ---------------------------------- Two Pointers Approach ($O(n \log n)$ Time, $O(n)$ Space)-------------------
vector<int> twoSum(vector<int>& nums, int target) {
    vector<pair<int, int>> vec;
    for (int i = 0; i < nums.size(); i++) {
        vec.push_back({nums[i], i});
    }
    
    // O(N log N) sorting
    sort(vec.begin(), vec.end());
    
    int left = 0, right = vec.size() - 1;
    while (left < right) {
        int sum = vec[left].first + vec[right].first;
        
        if (sum == target) {
            return {vec[left].second, vec[right].second};
        } else if (sum < target) {
            left++;  // Need a bigger sum
        } else {
            right--; // Need a smaller sum
        }
    }
    return {};
}