#include <iostream>

using namespace std;

int main(){
    
    int V[100];
    int N, X; //valor de entrada e elemento a ser pesquisado
    int i, j; //contadores
    bool achou;

    i = 0;
    cin >> N;

    //Armazenando no Vetor
    while (N != 0){
        V[i] = N;
        i++;
        cin >> N;
    }
    
    // Elemento a ser pesquisado
    cin >> X;

    // Conferindo se X esta no vetor
    for (j=0;j<i;j++){
        if (X == V[j]){
            achou = true;
            break;
        }
    }

    // Mostrado resultado
    if (achou)
        cout << "Elemento " << X << " encontrado na posicao " << j << endl;
    else cout << "Elemento " << X << " nao foi encontrado" << endl;

    return 0;
}