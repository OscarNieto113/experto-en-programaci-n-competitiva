#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solution (){
    long long x, y, z;
    cin >> x >> y >> z;

    long long A = pow(10, z-1);
    long long B = pow(10, z-1);

    while (A < (long long)pow(10, x-1)) A = A * 2;

    while (B < (long long)pow(10, y-1)) B = B * 3;

    cout << A << " " << B << endl;

}

int main(int argc, char* argv[]) {
    int testCases;

    cin >> testCases;

    for (int i = 0; i < testCases; i++) solution();
}