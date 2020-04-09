#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

int main(){

    int i,j;
    char auxiliar[1000];
    char palavras[3][1000];
    
    for(i=0;i<3;i++){
        cin.getline(palavras[i],1000);
    }
   
    for(i=1;i<3;i++) {
        for (j=1;j<3;j++) {
            if (strcmp(palavras[j-1],palavras[j]) > 0){
                strcpy(auxiliar,palavras[j-1]);
                strcpy(palavras[j-1],palavras[j]);
                strcpy(palavras[j],auxiliar);
            }
        }        
    }

    for(i = 0; i<3; i++)
        cout << palavras[i] << " ";


    cout << endl;

    return 0;
}
