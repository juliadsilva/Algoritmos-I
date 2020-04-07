#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int matriz[100][100];
    int l,c; //Linhas e coluna da matriz
    int d; // Dimensão do pixel em mm
    int i,j; // Contadores
    int ferida; // Contador para area da ferida 
    int area; //area da ferida

    cin >> l >> c >> d;
    
    ferida = 0;
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            cin >> matriz[i][j];
            
            if (matriz[i][j] == 1)
                ferida ++;
        }
    }

    area = d * d * ferida;

    cout << "AREA = " << area << " mm^2" << endl;
 
    return 0;
}