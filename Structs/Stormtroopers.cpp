#include<iostream>

using namespace std;

struct istorm
{
    int storm;
    double IM; //indice de maldade
    double FA; //força de abate
    double GA;
};

int main()
{
    istorm dados[100];
    int i, j;
    int idstorm;
    double GAmaior;

    i = 0;
    cin >> dados[i].storm;
    while(dados[i].storm != 0){
       cin >> dados[i].IM;
       cin >> dados[i].FA;

       dados[i].GA = (dados[i].IM + dados[i].FA)/2;

       i++;
       cin >> dados[i].storm;
    }

    for(j=0;j<i;j++)
        cout << dados[j].GA << endl;;

    GAmaior = dados[0].GA;
    idstorm = dados[0].storm;

    for(j=1;j<i;j++){
        if(dados[j].GA > dados[j-1].GA){
            idstorm = dados[j].storm;
            GAmaior = dados[j].GA;
        }
    }

    cout << "Stormtrooper escolhido: " << idstorm << endl; 
    cout << "GA = " << GAmaior << endl;   

    return 0;

}


