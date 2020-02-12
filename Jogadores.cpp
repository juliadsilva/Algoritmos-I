#include <iostream>
#include <string.h>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

int main(){

    int i;
    int N;
    int idade[1000];
    string nome[1000];

    cin >> N;

    for(i=0;i<N;i++){
         getline(cin, nome[i]);
         cin >> idade[i];
         cout << nome[i] << idade [i] << endl;
    }

    return 0;

}

