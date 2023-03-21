#include <iostream>
#include <vector>
using namespace std;

void solution (){
    int k, m, p;
    cin >> k >> m >> p;
    vector<int> ml(m), pl(p);
    for (int i = 0; i < m; i++) cin >> ml[i];
    for (int i = 0; i < p; i++) cin >> pl[i];
    
    int i=0, j=0;
    vector<int>visited;

    while (i < m || j < p) {
        if (i < m && j < p) {
            if (ml[i] == 0) visited.push_back(0), i++, k++;
            else if (pl[j] == 0) visited.push_back(0), j++, k++;
            else {
                if (ml[i] < pl[j] && ml[i] <= k) visited.push_back(ml[i]), i++;
                else if (ml[i] >= pl[j] && pl[j] <= k) visited.push_back(pl[j]), j++;
                else{
                    cout << -1 << "\n";
                    return;
                }
            }
        }

        else if(i < m){
            if (ml[i] == 0) visited.push_back(0), i++, k++;
            else {
                if (ml[i] <= k) visited.push_back(ml[i]), i++;
                else {
                    cout << -1 << "\n";
                    return;
                }
            }
        }
        else if(j < p){
            if (pl[j] == 0) visited.push_back(0), j++, k++;
            else {
                if (pl[j] <= k) visited.push_back(pl[j]), j++;
                else {
                    cout << -1 << "\n" ;
                    return;
                }
            }
        }
    }
    for(auto i : visited) cout << i << " " ;
        cout << "\n";
}

int main(int argc, char* argv[]) {
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++){
        solution();
    }
}
