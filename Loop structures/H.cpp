#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N;
    double H,i;
    cin >> N;
    
    H = 0;
    for (i=1;i<=N;i++)
    {
        H += 1/i;            
    }
    
    cout << fixed;
    cout.precision(4);
    cout << H << endl;

    return 0;
}