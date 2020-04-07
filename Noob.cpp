#include<iostream>

using namespace std;

struct dadosaluno
{
    int matricula;
    double notaum;
    double notadois;
    double media;
};

int main()
{

    dadosaluno aluno;

    cout << "Digite o seu numero de matricula: " << endl;
    cin >> aluno.matricula;

    cout << "Digite a nota da primeira prova: " << endl;
    cin >> aluno.notaum;

    cout << "Digite a nota da segunda prova: " << endl;
    cin >> aluno.notadois;

    aluno.media = ((aluno.notaum*2) + (aluno.notadois*3)) / 5;

    cout << "Matricula do aluno: " << aluno.matricula << endl;
    cout<<fixed;
    cout.precision(2);
    cout << "Nota da primeira prova: " << aluno.notaum << endl;
    cout << "Nota da segunda prova: " << aluno.notadois << endl;
    cout << "Media: " << aluno.media << endl;

    return 0;

}