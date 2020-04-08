#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    double media;
    ifstream myfile ("temperaturas.txt"); // ifstream = padrão ios:in

    media = 0;

    if (myfile.is_open())
    {
        while (! myfile.eof() ) //enquanto end of file for false continua
        {
           media = media + (myfile);
        }
        myfile.close();

        cout << "Temperatura media: " << media << " graus" << endl;
    }
    else cout << "Unable to open file"; 
    
    return 0;
}
