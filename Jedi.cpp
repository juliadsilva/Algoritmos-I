#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

struct jedi
{
    char name[100];
    int base; 
};

int main()
{
    int i;
    int n; //numeor de cadastros
    char nomebusca[100];
    jedi dados[100];
    bool econtrado = false;
    cin >> n;

    for(i=0;i<n;i++){
        cin.ignore();
        cin.getline(dados[i].name,100);
        cin >> dados[i].base;
    }
    
    cin.ignore();
    cin.getline(nomebusca,100);

    for(i=0;i<n;i++){
        if (strcmp(nomebusca,dados[i].name) == 0){
            cout << "Este cavaleiro esta na base " << dados[i].base;
            econtrado = true;
            break;
        }
    }

    if(!econtrado) 
        cout << "Este cavaleiro nao esta cadastrado" << endl;
   
    return 0;
}


