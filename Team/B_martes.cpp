#include <iostream>
#include <string>
#include <bits/stdc++.h>
 
using namespace std;
 
void solution (){
    string arrange;
    int sizeRestaurant, distance, gap, gap2;
    int tablesTaken = 0;
    
    cin >> sizeRestaurant >> distance;
    cin >> arrange;
 
    gap = distance;
    gap2 = -(distance + 1);
 
    for (int i = 0; i < sizeRestaurant; i++){
        if (arrange[i] == '1') {
            gap = 0;
            if ((i + 1 - gap2) <= distance) tablesTaken--;

			gap2 = i + 1;
        } else {
            if (++gap > distance) {
				tablesTaken++;
				gap2 = i + 1, gap = 0;
			}
        }
    }
 
    cout << tablesTaken << endl;
}
 
int main(int argc, char* argv[]) {
    int testCases;
    cin >> testCases;
 
    for (int i = 0; i < testCases; i++) solution();
}