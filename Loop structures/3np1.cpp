#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int i, j, k;
	int n;
	int c;
	int maior;
	int temp; //variavel para troca
	bool flag = false; // flag para troca

	cin >> i >> j;
	// Caso a segunda entrada seja menor que a primeira
	// realiza a troca para entrar no laço de repetição
	if( j < i ){
		temp = i;
		i = j;
		j = temp;
		flag = true;
	}

	c = 0;
	maior = 0;


	for (k = i; k <= j; k++)
	{
		n = k;
		c = 0;
		while (n >= 1)
		{
			if(n % 2 == 0)
				n = n / 2;
			else n = (3 * n) + 1;

			c += 1;

			if (n == 1)
			{
				c += 1;
				break;
			}
		}

		if (maior < c)
			maior = c;
	}


	if (flag){
		temp = i;
		i = j;
		j = temp;
	}

	cout << i <<" " << j << " " << maior << endl;


	return 0;
}
