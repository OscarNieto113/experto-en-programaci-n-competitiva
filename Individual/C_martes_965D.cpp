#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solution (int width, int maxJump, vector<int>rocks){
    int sum = 0;
    for (int i = 0; i < maxJump; i++){
        sum += rocks[i];
    }

    int maxFrogs = sum;

    for (int i = maxJump; i < width - 1; i++) {
        sum = sum - rocks[i - maxJump] + rocks[i];
        maxFrogs = min(maxFrogs, sum);
    }

    cout << maxFrogs;
}

int main(int argc, char* argv[]) {
    int width, maxJump;

    cin >> width >> maxJump;

    vector <int> rocks(width - 1);

    for (int i = 0; i < width - 1; i++){
        cin >> rocks[i];
    }

    solution(width, maxJump, rocks);
}