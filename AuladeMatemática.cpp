#include <iostream>

using namespace std;

int main(){
    
    int N;
    int i;
    int V[11];
    
    cin >> N;

    for (i=0;i<=10;i++)
    {
        V[i] = N * i;
        cout << N << " x " << i << " = " << V[i] << endl;
    }
  
    return 0;
}