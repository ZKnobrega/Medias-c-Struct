#include <iostream>
#include <locale>
using namespace std;

    typedef struct Aluno
    {
        double Media[5];
        string Nome[5];

    }AL;
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Aluno Vetor[5];
    string nome;
    double nota1, nota2, med;
    for (int i=0; i<5; ++i)
    {
        cout << "Insira o " << i+1 << "º Nome: \n";
        cin >> nome;
        cout << "Insira a "<< i+1 <<" º Nota: \n";
        cin >> nota1;
        cout << "Insira a "<< i+2 <<" º Nota: \n";
        cin >> nota2;
        med = (nota1+nota2)/2;
        Vetor[i].Nome[i] = nome;
        Vetor[i].Media[i] = med;
    }
    for (int i=0; i<5; ++i)
    {
        cout << "O nome é : " << Vetor[i].Nome[i] << " e a Média é: " << Vetor[i].Media[i] << endl;
    }
    return 0;
}
