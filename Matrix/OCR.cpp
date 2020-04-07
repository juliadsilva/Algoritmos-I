#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main(){

    int igual;
    int saida;
    int i,j;
    int matriz[5][3];
    int zero[5][3] = {{0,0,0},{0,1,0},{0,1,0},{0,1,0},{0,0,0}};
    int um[5][3] = {{1,1,0},{1,1,0},{1,1,0},{1,1,0},{1,1,0}};
    int dois[5][3] = {{0,0,0},{1,1,0},{0,0,0},{0,1,1},{0,0,0}};
    int tres[5][3] = {{0,0,0},{1,1,0},{0,0,0},{1,1,0},{0,0,0}};
    int quatro[5][3] = {{0,1,0},{0,1,0},{0,0,0},{1,1,0},{1,1,0}};
    int cinco[5][3] = {{0,0,0},{0,1,1},{0,0,0},{1,1,0},{0,0,0}};
    int seis[5][3] = {{0,0,0},{0,1,1},{0,0,0},{0,1,0},{0,0,0}};
    int sete[5][3] = {{0,0,0},{1,1,0},{1,1,0},{1,1,0},{1,1,0}};
    int oito[5][3] = {{0,0,0},{0,1,0},{0,0,0},{0,1,0},{0,0,0}};
    int nove[5][3] = {{0,0,0},{0,1,0},{0,0,0},{1,1,0},{1,1,0}};
    int saida[5][3] = {{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}};

     
    for(i=0;i<5;i++)
        for(j=0;j<3;j++){
            cin >> matriz[i][j];
        }
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(matriz[i][j] != saida[i][j]) 
                saida = 0;
            else saida = 1;  
        }
    }
    
    while (saida != 0){
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(matriz[i][j] != zero[i][j]) 
                igual = 10;
                else igual = 0;  
            }
        }

    
    }

    

    switch (igual){
        case 1:
            cout << "ZERO";
            break;
        case 1:
            cout << "UM";
            break;
        case 2:
            cout << "DOIS";
            break;
        case 3:
            cout << "TRES";
            break;
        case 4:
            cout << "QUATRO";
            break;
        case 5:
            cout << "CINCO";
            break;
        case 6:
            cout << "SEIS";
            break;
        case 7:
            cout << "SETE";
            break;
        case 8:
            cout << "OITO";
            break;
        case 9:
            cout << "NOVE";
            break;
    }

    
    return 0;

}