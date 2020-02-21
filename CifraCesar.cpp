#include <iostream>
#include <cmath>
#include <math.h>
#include <string.h>

using namespace std;

int main(){

    char matriz[100][100];
    int L, C;
    int i, j;

    cin >> L >> C;

    for(i=0;i<L;i++)
        for(j=0;j<C;j++){
            cin >> matriz[i][j];
        }
    
      for(i=0;i<C;i++)
        for(j=0;j<L;j++)
            cout << matriz[j][i];

    return 0;
}