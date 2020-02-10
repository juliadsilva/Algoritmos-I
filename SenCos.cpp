#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double N1;
    double N2;
    double i;
    double S, C; //seno e cosseno
    double inter1;
    double inter2;
    bool flag = false; 

    cin >> N1 >> N2;

    for (i=N1;i<N2;i+=0.1){
        S = sin (i);
        C = cos (i);

        if (S*C >0 && !flag){
            inter1 = i;
            flag = true;
        }
        else if ((S*C<0) && flag){
            inter2 = i-0.1;
            break;
        } 
    }

    cout << fixed;
    cout.precision(1);
    cout << inter1 << " a " << inter2 << endl;
    return 0;
}