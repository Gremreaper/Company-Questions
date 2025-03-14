#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array
    sort(arr.begin(), arr.end());

    // Maximum product of three numbers:
    int emp1 = arr[n - 1]; // Largest element
    int emp2 = arr[n - 2]; // Second largest element
    int emp3 = arr[n - 3]; // Third largest element

    // Minimum values for negative product consideration:
    int neg1 = arr[0];
    int neg2 = arr[1];

    // Maximum product possible
    int result = max(emp1 * emp2 * emp3, neg1 * neg2 * emp1);

    cout << result << endl;

    return 0;
}
