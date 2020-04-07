#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main(){

    int matriz1[100][100];
    int matriz2[100][100];
    int resultado[100][100];
    int L, C;
    int i, j;

    cin >> L >> C;

    for(i=0;i<L;i++)
        for(j=0;j<C;j++)
            cin >> matriz1[i][j];
    
    for(i=0;i<L;i++)
        for(j=0;j<C;j++)
            cin >> matriz2[i][j];

    for(i=0;i<L;i++)
        for(j=0;j<C;j++)
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];    
    
   for(i=0;i<L;i++){
        for(j=0;j<C;j++)
            cout << resultado[i][j] << " ";
        cout << endl;
    }

    return 0;
}