#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solution (){
    int places, time, mid, skip, result;
    cin >> places >> time;

    time--;

    if (places % 2 == 0) result = time % places;
    
    else{
        mid = (places / 2);
        skip = time / mid;
        result = (skip + time) % places;
    }

    cout << result + 1 << endl;
}

int main(int argc, char* argv[]) {
    int testCases;

    cin >> testCases;

    for (int i = 0; i < testCases; i++) solution();
}