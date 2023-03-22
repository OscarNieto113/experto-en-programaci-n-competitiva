#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>


using namespace std;


void solution (){
    int sizeRestaurant, distance, gap, j;
    int tablesTaken = 0;
    string arrange;

    cin >> sizeRestaurant, distance;
    cout << sizeRestaurant << distance << endl;
    cin >> arrange;
    cout << arrange;

    gap = distance;
    j = -(distance + 1);

    for (int i = 0; i < sizeRestaurant; i++){
        if (arrange[i] == '1') {
            gap = 0;
            if ((i + 1 - j) <= distance)
				--tablesTaken;
			j = i + 1;
        } else {
            if (++gap > distance) {
				++tablesTaken;
				j = i + 1;
				gap = 0;
			}
        }
    }

    //cout << tablesTaken << endl;
}

int main(int argc, char* argv[]) {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) solution();
}