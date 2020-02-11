#include <iostream>

using namespace std;

int main(){

    char nome_cidade;
    
    cin >> nome_cidade;

    switch (nome_cidade){
        case 'Brasilia':
            cout << 61 << endl;
            break;
        case 'Salvador':
            cout << 71 << endl;
            break;
        case 'Sao Paulo':
            cout << 11 << endl;
            break;
        case 'Rio de Janeiro':
            cout << 21 << endl;
            break;
        case 'Juiz de Fora':
            cout << 32 << endl;
            break;
        case 'Campinas':
            cout << 19 << endl;
            break;
        case 'Vitoria':
            cout << 27 << endl;
            break;
        case 'Belo Horizonte':
            cout << 31 << endl;
            break;
        case 'Santa Rita do Sapucai':
            cout << 35 << endl;
            break;
        default:
            cout << " DDD nao cadastrado" << endl;
    }

    return 0;    


}