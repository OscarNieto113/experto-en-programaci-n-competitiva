#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solution (){

}

int main(int argc, char* argv[]) {
    int width, maxJump;
    
    cin >> width >> maxJump;
    vector <int> rocks(width - 1);
    for (int i = 0; i < width - 1; i++){
        cin >> rocks[i];
    }
    solution();
}