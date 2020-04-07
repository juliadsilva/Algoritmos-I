#include <iostream>
#include <cmath>
#include <math.h>
#include <string.h>

using namespace std;

int main(){

    int matriz[100][100];
    int i, j;
    int resultado;

    int masculino[3][3] = {{1,1,1},{0,1,0},{0,0,1}};
    int feminino[3][3] = {{1,0,1},{1,1,0},{1,0,0}};  

    for(i=0;i<3;i++)
        for(j=0;j<3;j++){
            cin >> matriz[i][j];
        }

     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(matriz[i][j] == masculino[i][j]) 
                resultado = 1;
            else if(matriz[i][j] == feminino[i][j])
                resultado = 2;  
                        
        }
    }

    if(resultado == 1)
        cout << "MASCULINO" << endl;
    else if (resultado == 2)
        cout << "FEMININO" << endl;
    return 0;
}