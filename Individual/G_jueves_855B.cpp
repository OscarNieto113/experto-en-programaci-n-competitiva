#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main(int argc, char* argv[]) {
    long long n, p, q, r;
    vector <long long> a(1000000);

    cin >> n >> p >> q >> r;

    long long dp[3][n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (i == 0){
            dp[0][0] = a[0] * p;
            dp[1][0] = dp[0][0] + a[0] * q;
            dp[2][0] = dp[1][0] + a[0] * r;
        } else {
            dp[0][i] = max(dp[0][i - 1], a[i] * p);
            dp[1][i] = max(dp[1][i - 1], dp[0][i] + a[i] * q);
            dp[2][i] = max(dp[2][i - 1], dp[1][i] + a[i] * r);
        }
    }

    cout << dp[2][n - 1] << endl;
}