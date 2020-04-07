#include<iostream>
#include<cmath>

using namespace std;

int main(){

    double matriz[2][2];
    int i,j; //contadores
    double M; //determinante

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cin >> matriz[i][j];
        }
    }

    M = (matriz[0][0]*matriz[1][1]) - (matriz[1][0]*matriz[0][1]);
    
    cout<<fixed;
    cout.precision(4);
    cout << "M =[" <<  matriz[0][0] << " " << matriz[0][1] << " ;" << matriz[1][0] << " " << matriz[1][1] << "]" << endl;
    cout << "Determinante de M = " << M << endl;
    cout << "Transposta de M =[" <<  matriz[0][0] << " " << matriz[1][0] << " ;" << matriz[0][1] << " " << matriz[1][1] << "]" << endl;

    return 0;
}