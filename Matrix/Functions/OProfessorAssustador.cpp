#include <iostream>
#include <cmath>

using namespace std;

double calculomedia(int notas[100], int alunos){

    double media;
    int i;

    for(i=0;i<alunos;i++)
        media = media + notas[i];
    
    return media/alunos;
    
}


int main()
{

	int N; //numero de alunos
    int NOTAS[100]; //notas
    int i; //contador
    double media;


    cin >> N;

    for(i=0;i<N;i++){
        cin >> NOTAS[i];
    }

    media = calculomedia(NOTAS, N);

    cout<<fixed;
    cout.precision(2);
    cout << "Media da turma = " << media << endl; 

    return 0;

}