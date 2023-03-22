#include <iostream>

using namespace std;

void solution (){
    int number;
    cin >> number;
    cout << number / 2 << endl;
}

int main(int argc, char* argv[]) {
    int testCases;

    cin >> testCases;

    for (int i = 0; i < testCases; i++) solution();
}