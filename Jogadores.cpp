#include <iostream>
#include <cstring>

using namespace std;

int main(){

    int i;
    int N;
    int idade[1000];
    char nome[1000];
    string names[N];

    cin >> N;
    
    for(i = 0; i<N; i++){
        cin.ignore();
        cin.getline(nome,1000);
        names[i] = nome;
        cin >> idade[i];
    }

    for(i = 0; i<N; i++){
        if( idade[i] >= 18) cout << names[i] << " "<< idade[i] << endl;
    }

    return 0;

}

