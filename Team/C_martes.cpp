#include <iostream>
#include <string>
#include <vector>
#include <climits>

using namespace std;

int bitwise_and(int k) {
    return k & 1;
}

int calculate_mismatch_count(const string& good_string, const vector<int>& digits) {
    int counter = 0;
    int k = 0;
    for (char c : good_string) {
        if (c != digits[bitwise_and(k)] + '0') {
            counter++;
        } else {
            k ^= 1;
        }
    }
    return counter;
}

int solve(const string& good_string) {
    int ans = INT_MAX;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            vector<int> digits = {i, j};
            int mismatch_count = calculate_mismatch_count(good_string, digits);
            if (bitwise_and(good_string.size() - mismatch_count)) {
                if (i != j) {
                    mismatch_count++;
                }
            }
            ans = min(ans, mismatch_count);
        }
    }
    return ans;
}

int main() {
    int test_cases;
    cin >> test_cases;

    for (int i = 0; i < test_cases; ++i) {
        string good_string;
        cin >> good_string;
        cout << solve(good_string) << endl;
    }

    return 0;
}
