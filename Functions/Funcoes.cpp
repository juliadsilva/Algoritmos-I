#include<iostream>
using namespace std;

int calculoa(int x){

    int a;
    a = 2*x*x + 3*x - 1;

    return a;
}

int calculob(int x){

    int b;
    b = x*x*x;

    return b;
}

int calculoc(int y){

    int c;
    c = y*y*y;

    return c;
}

int main()
{
    int a,b,c,x,y;

    cin >> x >> y;
    
    // a = 2x^2 + 3x - 1;
    a = calculoa(x);
    cout << "a = " << a << endl;

    // b = x^3;
    b = calculob(x);
    cout << "b = " << b << endl;

    // c = y^3;
    c = calculoc(y);
    cout << "c = " << c << endl;

    return 0;
}