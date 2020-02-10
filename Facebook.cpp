#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N; //numero de usuarios
    int V[1000];  //numero de contatos
    int i; //contador
    int maior, menor;

    cin >> N;

    maior = 0;
    menor = 1000;

    for (i=0; i<N; i++){
      cin >> V[i];
    }

    for (i=0;i<N;i++)
    {
      if (V[i] > maior) 
          maior = V[i];  
      if (V[i] < menor)
          menor = V[i];
    } 

    cout << "Menor numero de contatos: " << menor << endl;
    cout << "Maior numero de contatos: " << maior << endl;

    return 0;

}