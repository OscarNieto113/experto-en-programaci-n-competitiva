#include <iostream>
#include <bits/stdc++.h>
#include <vector>
 
using namespace std;
 
int solution (int bid){
    while (bid % 2 == 0) bid /= 2;
    while (bid % 3 == 0) bid /= 3;

    return bid;
}
 
int main(int argc, char* argv[]) {
    int players, num = 0;

    cin >> players;
    vector <int> bids(players);

    for (int i = 0; i < players; i++){
        cin >> bids[i];

        if (i == 0) num = solution(bids[i]);

        else{
            if (num != solution (bids[i])){
                cout << "No"; 
                return 0;
            }
        }
    }

    cout << "Yes";
    return 0;
}