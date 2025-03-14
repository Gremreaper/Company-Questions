#include<iostream>
#include<vector>
#include<map>

using namespace std;

void solve(vector<vector<int>>& store, vector<int>& arr, int sum) {
    for (int i = 0; i < arr.size(); i++) {
        vector<int> temp;
        int k = 0;

        for (int j = i; j < arr.size(); j++) {
            k += arr[j];
            temp.push_back(arr[j]);

            if (k == sum) {
                store.push_back(temp);
            }
        }
    }
}

int main() {
    int n, sum;
    cin >> n >> sum;

    vector<int> arr(n); // Resize the vector
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<vector<int>> store;
    solve(store, arr, sum);

    for (auto& it : store) {
        for (int num : it) {
            cout << num << " ";
        }
        cout << endl; // To print each subarray on a new line
    }
    return 0;
}


/*

Optimized one 
#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

void solve(vector<vector<int>>& store, vector<int>& arr, int target) {
    unordered_map<int, vector<int>> prefixSum; // Store sum and starting indices
    int sum = 0;
    
    // To handle cases where the subarray starts from index 0
    prefixSum[0].push_back(-1);  
    
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        
        if (prefixSum.find(sum - target) != prefixSum.end()) {
            for (int start : prefixSum[sum - target]) {
                vector<int> temp(arr.begin() + start + 1, arr.begin() + i + 1);
                store.push_back(temp);
            }
        }
        
        // Add current sum to map
        prefixSum[sum].push_back(i);
    }
}

int main() {
    int n, sum;
    cin >> n >> sum;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<vector<int>> store;
    solve(store, arr, sum);

    for (auto& it : store) {
        for (int num : it) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}

*/