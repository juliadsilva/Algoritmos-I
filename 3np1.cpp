#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int i, j, k;
	int n;
	int c;
	int maior;

	cin >> i >> j;

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

	cout << i << endl;
	cout << j << endl;
	cout << maior << endl;


	return 0;
}
