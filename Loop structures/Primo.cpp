#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	int n; //numero lido
	int r; //raiz quadrada
	int i = 0; //contador
	bool f = true; //flag para indentificar primo

	// Ler o numero
	cin >> n;

	/* Se um numero não for divisivel por nenhum numero entre 1 e a raiz quadrada dele,
	* com excessao do 1, ele e primo.
	* Com essa abordagem, se torna possível reduzir o tempo de execução
	*/
	
	r = sqrt (n);

	if(n == 1 || n == 2) //Um e dois sao primos
	{
		cout << "primo" << endl;
	}
	else
	{
		for(i = 2; i <= r; i++) //teste até a raiz quadrada
		{
			if (n % i == 0)
			{
				f = false;
				break;
			}
		}

		if (f) cout << "primo" << endl;
		else cout << "nao e primo" << endl;
	}

	return 0;
}

