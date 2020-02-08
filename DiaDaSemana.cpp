#include <iostream>
#include <stdio.h>
#include <cmath>
#include <math.h>

using namespace std;
int calculaG(int mes, int ano){ 
	if(mes <= 2) return ano - 1;
	else return ano;
}

int calculaF(int mes){
	if(mes <= 2) return mes + 13;
	else return mes + 1;
}

int calculaN(int f, int g, int dia){
	return int(365.25 * g) + int(30.6 * f) - 621049 + dia;
}

int calculaDelta(int n){
	if( n < 36523) return 2;
	else if ( n < 73048 ) return 1;
	else return 0;
}

int calculaDs(float n, int delta){
	double Nper7 = n / 7; //divisao
	int intPart = int(Nper7); //parte inteira
	double decPart = Nper7 - intPart; //parte decimal
	return round(decPart * 7) + delta + 1;
}

void diaSemana (int ds){
	switch(ds){
	case 1:
		cout << "domingo" << endl;
		break;
	case 2:
		cout << "segunda-feira" << endl;
		break;
	case 3:
		cout << "terca-feira" << endl;
		break;
	case 4:
		cout << "quarta-feira" << endl;
		break;
	case 5:
		cout << "quinta-feira" << endl;
		break;
	case 6:
		cout << "sexta-feira" << endl;
		break;
	case 7:
		cout << "sabado" << endl;
		break;
	}
}

int main (){

	int dia, mes, ano; //Vari�veis de entrada
	int g, f, n, delta, ds; // Vari�veis a serem calculadas

	cin >> dia >> mes >> ano;

	g = calculaG(mes, ano); 
	f = calculaF(mes);
	n = calculaN(f, g, dia);
	delta = calculaDelta(n);
	ds = calculaDs(n, delta);
 	diaSemana(ds);

	return 0;
}

