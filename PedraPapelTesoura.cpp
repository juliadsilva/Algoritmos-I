#include <iostream>
#include <cstring>
#include <string.h>
#include <iomanip>

using namespace std;

int main(){

    int i;
    int T; //número de casos de teste.
    int resultado[1000];
    char jogadorA[1000];
    char jogadorB[1000];
       
        cin >> T;
        cin.ignore();
    
    for(i=0; i<T; i++){
        
        cin.getline(jogadorA,1000);   
        cin.getline(jogadorB,1000);
                
        if(strcmp(jogadorA,"pedra") == 0){
            if(strcmp(jogadorB,"tesoura") == 0)
                resultado[i] = 1; 
            else if(strcmp(jogadorB,"papel") == 0)
                resultado[i] = 2;
            else if(strcmp(jogadorB,"pedra") == 0)
                resultado[i] = 3;
        } 

        else if(strcmp(jogadorA,"tesoura") == 0){
            if(strcmp(jogadorB,"pedra") == 0)
                resultado[i] = 2; 
            else if(strcmp(jogadorB,"papel") == 0)
                resultado[i] = 1;
            else if(strcmp(jogadorB,"tesoura") == 0)
                resultado[i] = 3;
        } 

        else if(strcmp(jogadorA,"papel") == 0){
            if(strcmp(jogadorB,"tesoura") == 0)
                resultado[i] = 2; 
            else if(strcmp(jogadorB,"pedra") == 0)
                resultado[i] = 1;
            else if(strcmp(jogadorB,"papel") == 0)
                resultado[i] = 3;
        } 

    }

    for(i=0; i<T; i++){
        
        if(resultado[i] == 1) cout << "Jogador A" << endl;
        else if(resultado[i] == 2) cout << "Jogador B" << endl;
        else if(resultado[i] == 3) cout << "Empate" << endl;
    }
   
    return 0;
}

