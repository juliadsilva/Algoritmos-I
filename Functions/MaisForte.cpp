#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

struct atleta
{
    char name[100];
    int nota1, nota2, nota3, nota4; 
    int pontuacao;
};

void posicao(int pontuacao[100],int n, int &posicaofinal){
    
    int i;
    for(i=1;i<n;i++)
        if(pontuacao[i] > pontuacao[i-1])
            posicaofinal = i;
}

int main()
{
    int i;
    int n; //numero de atletas
    int pontuacao[100];
    int posicaofinal;
    atleta dados[100];
    
    cin >> n;

    for(i=0;i<n;i++){
        cin.ignore();
        cin.getline(dados[i].name,100);
        cin >> dados[i].nota1;
        cin >> dados[i].nota2;
        cin >> dados[i].nota3;
        cin >> dados[i].nota4;

        dados[i].pontuacao = dados[i].nota1 + dados[i].nota2 + dados[i].nota3 + dados[i].nota4;
        pontuacao[i] = dados[i].pontuacao;
    }

    posicaofinal = 0;

    posicao(pontuacao,n,posicaofinal);

    cout << "Vencedor: " << dados[posicaofinal].name << endl;
   
    return 0;
}


