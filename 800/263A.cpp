#include <iostream>
#include <cstdlib>
using namespace std;
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int m[5][5];
    int linha,coluna;
 
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> m[i][j];
            if(m[i][j] == 1){
                linha = i;
                coluna = j;
            }
        }
    }
 
    int dist_v = abs(linha - 2);
    int dist_h = abs(coluna - 2);

    cout << dist_h + dist_v << endl;
 
    return 0;
}