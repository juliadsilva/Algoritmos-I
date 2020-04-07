#include <iostream>

using namespace std;

void troca(int &X, int &Y){

   int troca;
   troca = X;
   X = Y;
   Y = troca;

}

int main()
{
	int x,y;

    cin >> x >> y;

    troca(x,y);
    
    cout << x << " " << y << endl; 
    
    return 0;
}