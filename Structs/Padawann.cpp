#include<iostream>
#include <cstring>

using namespace std;

struct padawann
{
    char name[100];
    int pontos; 
};

int main()
{
    int i;
    int n; //numeor de cadastros
    double media;
    padawann dados[100];
        
    int identificador;
    
    cin >> n;

    media = 0;

    for(i=0;i<n;i++){
        cin.ignore();
        cin.getline(dados[i].name,100);
        cin >> dados[i].pontos;
        media = media + dados[i].pontos;
    }
    
    identificador = 0;
    
    for(i=1;i<n;i++){
        if(dados[i].pontos > dados[i-1].pontos){
            identificador = i;
        }
    }

    cout << "Padawan com mais pontos: " << dados[identificador].name << endl;
    cout << "Pontos: " << dados[identificador].pontos << endl;
    cout<<fixed;
    cout.precision(2);
    cout << "Media da turma: " << media/2 << " pontos" << endl;
    
    
    return 0;
}


