#include <iostream>
 
using namespace std;
 
int main() {
 
   double N;
   double R;
   double A;
   
   cin >> R;
   
   N = 3.14159;
   A = N*(R*R);
      
   cout << fixed;
   cout.precision(3);
   cout << "AREA=" << A << endl;
 
    return 0;
}