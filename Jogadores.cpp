#include <iostream>
#include <string.h>
#include <iomanip>
#include <vector>

using namespace std;

int main(){

    int i;
    int N;
    int idade[1000];
    char nome[1000];

    cin >> N;
    cin.getline(nome,1000);
    for(i=0;i<N;i++){
         cin >> idade[i];
         cout << nome[i] << idade [i] << endl;
    }

    return 0;

}

