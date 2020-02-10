#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int N; //numero de alunos
    int V[1000]; //notas dos alunos
    int i;
    double soma, media; //variaveis para calculo da media
    int maior, menor; 

    cin >> N;
    maior = 0;
    menor = 0;

    for(i=0;i<N;i++){
        cin >> V[i];
    }
    
    for(i=0;i<N;i++){
        soma += V[i];
    }
 
    media = soma/N;

    for(i=0;i<N;i++){
        if (V[i] >= media)
            maior ++;
        else   
            menor ++; 
    }
    cout<<fixed;
    cout.precision(2);
    cout << "Media da turma: " << media << endl;
    cout << "Alunos com nota acima da media: " << maior << endl;
    cout << "Alunos com nota abaixo da media: " << menor << endl;

    return 0;
}
