#include <iostream>
#include <cstring>

using namespace std;

int main(){

    int i;
    int N;
    double N1, N2, N3, N4;
    double media[1000];
    char nome[1000];
    string names[N];

    cin >> N;
    
    for(i = 0; i<N; i++){
        cin.ignore();
        cin.getline(nome,1000);
        names[i] = nome;

        cin >> N1 >> N2 >> N3 >> N4;
        
        media[i] = (N1 + 2*N2 + 3*N3 + 4*N4) / 10.0;
    } 

    for(i = 0; i<N; i++){
        cout << names[i] << ": ";
        cout << fixed;
        cout.precision(2);
        cout << media[i] << endl;
    }

    return 0;

}

