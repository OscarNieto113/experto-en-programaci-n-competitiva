#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <set>

using namespace std;


void solution (){
    string stringTest;
    set<char> goodKeys;
    int i = 0;
    int j = 1;

    cin >> stringTest;

    if (stringTest.size() > 1){
        while (i <= stringTest.size() - 1){
            if (stringTest[i] == stringTest[j]) i+=2, j+=2;
            else goodKeys.insert(stringTest[i]), i++, j++;
        }
    } else {
        cout << stringTest << endl;
        return;
    }
    
    for (auto it=goodKeys.begin(); it!=goodKeys.end(); ++it)
        cout << *it;
    cout << endl;
}

int main(int argc, char* argv[]) {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) solution();
}