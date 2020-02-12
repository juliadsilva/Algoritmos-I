#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

int main(){

    char cidade[1000];
    
    cin.getline(cidade,1000);

    if (strcmp(cidade,"Brasilia") == 0)
        cout << 61 << endl;
    else if (strcmp(cidade,"Salvador") == 0)
        cout << 71 << endl;
    else if (strcmp(cidade,"Sao Paulo") == 0)
        cout << 11 << endl;
    else if (strcmp(cidade,"Rio de Janeiro") == 0)
        cout << 21 << endl;
    else if (strcmp(cidade,"Juiz de Fora") == 0)
        cout << 32 << endl;
    else if (strcmp(cidade,"Campinas") == 0)
        cout << 19 << endl;
    else if (strcmp(cidade,"Vitoria") == 0)
        cout << 27 << endl;
    else if (strcmp(cidade,"Belo Horizonte") == 0)
        cout << 31 << endl;
    else if (strcmp(cidade,"Santa Rita do Sapucai") == 0)
        cout << 35 << endl;
    else cout << " DDD nao cadastrado" << endl;
    
    return 0;    

}