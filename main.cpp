#include <string>
#include <iostream>
using namespace std;

void menu()
{
    cout << "*****************************************" << endl;
    cout << "***  Bem-vindo ao sistema energético  ***" << endl;
    cout << "*****************************************" << endl;
    cout << "01 - Cadastrar" << endl;
    cout << "02 - Relatório" << endl;
    cout << "03 - Sair" << endl;

    return;
}

void consumo()
{
}

void relatorio()
{
}

int main()
{
    int opcao;

    while (!03)
    {
        menu();

        cin >> opcao;

        if (opcao == 01)
        {
            /* code */
        }
        else if (opcao == 02)
        {
            /* code */
        }
    }

    return 0;
}