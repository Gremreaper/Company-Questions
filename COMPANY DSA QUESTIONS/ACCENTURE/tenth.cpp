#include<bits/stdc++.h>
using namespace std;

int main() {
    int maxisum = INT_MIN;  // To track the maximum product
    unordered_map<int, int> mpp;
    int n, sum;
    cin >> n >> sum;
    
    pair<int, int> p = {-1, -1};  // Initialize pair with invalid values
    int arr[n];
    
    // Read array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Iterate through the array
    for (int i = 0; i < n; i++) {
        int complement = sum - arr[i];
        
        // Check if complement exists in the map
        if (mpp.find(complement) != mpp.end()) {
            int first = arr[i];
            int second = complement;
            
            // Ensure first element is greater than the second
            if (first < second) {
                swap(first, second);
            }

            // Calculate the product
            int product = first * second;
            
            // Update max product and pair if needed
            if (product > maxisum) {
                maxisum = product;
                p.first = first;
                p.second = second;
            }
        }
        
        // Add current element to the map
        mpp[arr[i]]++;
    }
    
    // Check if a valid pair was found
    if (p.first == -1 && p.second == -1) {
        cout << "No valid pair found" << endl;
    } else {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
