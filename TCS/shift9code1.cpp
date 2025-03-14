#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();  
        int total = n * (n + 1) / 2; // Sum formula for 0 to n
        
        // Subtract each element from the total sum
        for (auto it : nums) {
            total -= it;
        }

        // Remaining value is the missing number
        return total;
    }
};

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    int result = obj.missingNumber(nums);

    cout << "Missing number: " << result << endl;

    return 0;
}
