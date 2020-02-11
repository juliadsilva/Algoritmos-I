#include <iostream>

using namespace std;

int main(){

    int N;
    int i;
    float X[100];
    float Y[100];
    char Op[100];
    float resultado[100];
    
    cin >> N;

    for (i=0;i<N;i++){
       cin >> X[i]; 
    }

    for (i=0;i<N;i++){
        cin >> Y[i];
    }

    for (i=0;i<N;i++){
        cin >> Op[i];
    } 

    for (i=0;i<N;i++){
        switch (Op[i]){
            case '+':
                resultado[i] = X[i] + Y[i];
                break;
            case '-':
                resultado[i] = X[i] - Y[i];
                break;
            case '*':
                resultado[i] = X[i] * Y[i];
                break;  
            case '/':
                resultado[i] = X[i] / Y[i];
                break; 
        }
    }

    for (i=0;i<N;i++){
        if (Op[i] == '/'){
            
            cout << X[i] << " " << Op[i] << " " << Y[i] << " = ";
            cout<<fixed;
            cout.precision(2);
            cout << resultado[i] << endl;
        }
        else cout << X[i] << " " << Op[i] << " " << Y[i] << " = " << resultado[i] << endl;
    }

    return 0;

}