#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n); // Initialize the vector with size n
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> ans;
    priority_queue<pair<int, int>> pq;

    // Add the first k elements into the heap
    for (int i = 0; i < k; i++) {
        pq.push({arr[i], i});
    }

    // First window's maximum
    ans.push_back(pq.top().first);

    for (int i = k; i < n; i++) {
        // Add next element to the heap
        pq.push({arr[i], i});

        // Remove elements outside the current window
        while (pq.top().second <= i - k) {
            pq.pop();
        }

        // Current window's maximum
        ans.push_back(pq.top().first);
    }

    // Output the result
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}


/*

More Optimized

#include<iostream>
#include<vector>
#include<deque>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& arr, int k) {
    deque<int> dq;
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++) {
        // Remove elements from front if they are out of the current window
        if (!dq.empty() && dq.front() <= i - k) {
            dq.pop_front();
        }

        // Remove smaller elements from the back of the deque
        while (!dq.empty() && arr[dq.back()] <= arr[i]) {
            dq.pop_back();
        }

        // Add current element index at the back
        dq.push_back(i);

        // Record the max value (starting from index k - 1)
        if (i >= k - 1) {
            ans.push_back(arr[dq.front()]);
        }
    }

    return ans;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> ans = maxSlidingWindow(arr, k);

    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

*/
