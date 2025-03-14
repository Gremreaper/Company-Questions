#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;

int func(vector<string>& res, int n) {
    unordered_map<int, pair<int, int>> mpp; // {size, {left_count, right_count}}

    for (int i = 0; i < n; i++) {
        int size = res[i][0] - '0'; // Convert character to integer
        char side = res[i][1];

        if (side == 'L') {
            mpp[size].first++; // Increment left count
        } else {
            mpp[size].second++; // Increment right count
        }
    }

    int pairs = 0;
    for (auto& it : mpp) {
        pairs += it.second.first > it.second.second ? it.second.second : it.second.first;
    }

    return pairs;
}

int main() {
    int n;
    cin >> n;

    vector<string> res(n);
    for (int i = 0; i < n; i++) {
        cin >> res[i];
    }

    int ans = func(res, n);
    cout << ans << endl;

    return 0;
}
