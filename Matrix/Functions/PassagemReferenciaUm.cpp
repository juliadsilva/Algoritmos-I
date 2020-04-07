#include <iostream>
#include <math.h>

using namespace std;

void media(int x, int y, float &m){

    m = sqrt(x*y);
}

int main()
{
	int x, y;
    float m;

    cin >> x >> y;

    m = 0;

    media(x,y,m);

    cout<<fixed;
    cout.precision(2);
    cout << "Media: " << m << endl;
    
    return 0;
}