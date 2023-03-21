#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void solution (<int>k, <int>MC, <int>PC, vector<int>ML, vector<int>CL){
    for (int i = 0; i < MC; i++){
        if (ML[i] == 0) k++;
    }

    for (int i = 0; i < PC; i++){
        if (PL[i] == 0) k++;
    }

    
}

int main(int argc, char* argv[]) {
  int testCases, initialLines, MonocarpChanges, PolycarpChanges, aux;
  vector<int> MonocarpLog, PolycarpLog;

  cin >> testCases;
  for (int i = 0; i < testCases; i++){
    cin >> initialLines >> MonocarpChanges >> PolycarpChanges;

    for (int i = 0; i < MonocarpChanges; i++){
        cin >> aux;
        MonocarpLog.push_back(aux);
    }

    for (int i = 0; i < PolycarpChanges; i++){
        cin >> aux;
        PolycarpLog.push_back(aux);
    }



  }
}
