//majority n/3

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    int n = nums.size();
    unordered_map<int, int> freq;

    // Step 1: Count the frequency of each element
    for (int num : nums) {
        freq[num]++;
    }

    vector<int> result;
    // Step 2: Check which elements appear more than n/3 times
    for (auto& it : freq) {
        if (it.second > n / 3) {
            result.push_back(it.first);
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = majorityElement(nums);
    
    if (result.empty()) cout << "No majority elements" << endl;
    else {
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
