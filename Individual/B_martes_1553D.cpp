#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solution (){
    string s, t;
    int i, j, aux;
    cin >> s >> t;

    i = s.size() - 1, j = t.size() - 1;
    aux = 0;

    if (i < j){
        cout << "NO\n";
        return;
    }

    while (i >= 0 && j >= 0 ){
        if (s[i] == t[j]) {
            i--, j--, aux++;
            if (aux == t.size()) {
               cout << "YES\n";
               return;
            }
        }

        else {
            i -= 2;
        }
    }

    if (j < 0) cout << "YES\n";
    else cout << "NO\n";
}

int main(int argc, char* argv[]) {
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++){
        solution();
    }
}