#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

int main(){

    char tipoum[1000];
    char tipodois[1000];
    char tipotres[1000];

    cin.getline(tipoum,1000);
    cin.getline(tipodois,1000);
    cin.getline(tipotres,1000);

    if (strcmp(tipoum,"vertebrado") == 0){
        if (strcmp(tipodois,"ave") == 0){
            if (strcmp(tipotres,"carnivoro") == 0)
                cout << "aguia" << endl;
            else if(strcmp(tipotres,"onivoro") == 0)   
                cout << "pomba" << endl;
        }
        else if (strcmp(tipodois,"mamifero") == 0){
            if (strcmp(tipotres,"onivoro") == 0)
                cout << "homem" << endl;
            else if(strcmp(tipotres,"herbivoro") == 0)   
                cout << "vaca" << endl;
        }
    }
    if (strcmp(tipoum,"invertebrado") == 0){
        if (strcmp(tipodois,"inseto") == 0){
            if (strcmp(tipotres,"hematofago") == 0)
                cout << "pulga" << endl;
            else if(strcmp(tipotres,"herbivoro") == 0)   
                cout << "lagarta" << endl;
        }
        else if (strcmp(tipodois,"anelideo") == 0){
            if (strcmp(tipotres,"hematofago") == 0)
                cout << "sanguessuga" << endl;
            else if(strcmp(tipotres,"onivoro") == 0)   
                cout << "minhoca" << endl;
        }
    }

    return 0;
}
