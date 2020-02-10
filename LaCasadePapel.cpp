#include <iostream>

using namespace std;

int main()
{
    int N; //numero de votos
    int V[1000];
    int i;
    int gostou, ngostou;
   
    cin >> N;
    gostou = 0;
    ngostou = 0;

    for(i=0;i<N;i++){
        cin >> V[i];
    }

    for(i=0;i<N;i++){
        if (V[i] > 0)
            gostou ++;
        else   
            ngostou ++; 
    }

    if (gostou > ngostou)
         cout << "A maioria gostou" << endl;
    else if (gostou < ngostou) 
         cout << "A maioria nao gostou" << endl;
    else cout << "Deu empate" << endl;
    
    return 0;
}
