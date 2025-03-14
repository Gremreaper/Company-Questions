#include<iostream>
#include<vector>
using namespace std;

// Function to check if a number is prime
bool func(int n) {
    if (n <= 1) return false;
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Function to check if both number and sum of its digits are prime
bool isprime(int n) {
    if (n >= 10) {
        int sum = 0, r = n;
        while (r != 0) {
            sum += r % 10;
            r /= 10;
        }
        return func(sum) && func(n); // Both sum and number should be prime
    } else {
        return func(n);
    }
}

// Function to find and store prime numbers in the range
void solve(int start, int end, vector<int>& ans) {
    for (int i = start; i <= end; i++) {
        if (isprime(i)) {
            ans.push_back(i);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> ans;
    solve(n, m, ans);

    for (int i : ans) {
        cout << i << endl;
    }

    return 0;
}
 