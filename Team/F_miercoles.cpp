#include <iostream>
#include <cmath>

using namespace std;

const long long MOD = 1e9 + 7;

long long fastPower(long long base, long long exponent, long long mod) {
    long long result = 1;
    while (exponent) {
        if (exponent & 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exponent >>= 1;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    long long power27 = fastPower(27, n, MOD);
    long long power7 = fastPower(7, n, MOD);
    long long result = (power27 - power7 + MOD) % MOD;
    cout << result << endl;
    return 0;
}
