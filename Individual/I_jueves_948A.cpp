#include <bits/stdc++.h>
#include <vector>

using namespace std;

bool redFlag = false;
int movementsX[4]={1,-1,0,0};
int movementsY[4]={0,0,-1,1};
D - mierocles
void dfs(int x, int y, int R, int C, vector<vector<char>> &pasture){
  int nx, ny, a;

    for(a = 0; a < 4; a++){
        nx = x + movementsX[a];
        ny = y + movementsY[a];
        if (nx < R && nx >= 0 && ny >= 0 && ny < C){
            if(pasture[nx][ny] == '.'){
                pasture[nx][ny] = 'D';
                dfs(nx, ny, R, C, pasture);
            } 
      
            if (pasture[nx][ny] == 'S' && pasture[x][y] == 'W'){
                redFlag = 1;
                return;
            }
        }
    }
  return;
}


int main(){
    int R, C;
    
    cin >> R >> C;

    vector<vector<char>> pasture(R, vector<char>(C, '.'));

    for (int i = 0; i < R; i ++) {
        for(int j = 0; j < C; j++){
            cin >> pasture[i][j];
        }
    }

    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            if (pasture[i][j] == 'W') dfs(i, j, R, C, pasture);
        }                      
    }

    if (redFlag == 1) cout << "No" << endl;
    
    else{
        cout << "Yes" << endl;
        for(int i = 0; i < R; i++){
            for(int j = 0; j < C; j++){
                cout << pasture[i][j];
            }
            cout<<endl;  
        }
    }
    return 0;
}