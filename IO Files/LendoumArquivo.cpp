#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{

  string line;
  ifstream myfile ("arquivo.txt"); // ifstream = padrão ios:in

  if (myfile.is_open())
  {
    while (! myfile.eof() ) //enquanto end of file for false continua
    {
      getline (myfile,line); // como foi aberto em modo texto(padrão) pega cada linha
      cout << line << endl;
    }
    myfile.close();
  }
  else cout << "Unable to open file"; 

  return 0;
}
