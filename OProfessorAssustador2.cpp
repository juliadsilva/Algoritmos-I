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

int acimamedia(int notas[100], int alunos, double media){

    int acima;
    int i;

    acima = 0;
    for(i=0;i<alunos;i++){
        if(notas[i] > media)
            acima ++;
    }

    return acima;
}

int abaixomedia(int notas[100], int alunos, double media){

    int abaixo;
    int i;

    abaixo = 0;
    for(i=0;i<alunos;i++){
        if(notas[i] > media)
            abaixo ++;
    }

    return abaixo;
}


int main()
{

	int N; //numero de alunos
    int NOTAS[100]; //notas
    int i; //contador
    double media;
    int acima, abaixo; //acima e abaixo da media


    cin >> N;

    for(i=0;i<N;i++){
        cin >> NOTAS[i];
    }

    media = calculomedia(NOTAS, N);

    acima = acimamedia(NOTAS, N, media);

    abaixo = abaixomedia(NOTAS, N, media);

    cout<<fixed;
    cout.precision(2);
    cout << "Media da turma = " << media << endl; 
    cout << "Alunos com nota abaixo da media: " << abaixo << endl;
    cout << "Alunos com nota acima da media: " << acima << endl; 



    return 0;

}