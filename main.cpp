#include <string>
#include <iostream>
#include "include/menu.hpp"

using namespace std;

// adicionar equipamento, informar potencia do equipamento e informar quantidade de equipamentos.
void CadastrarResidencia()
{

}

void removerResidencia()
{

}

double calcularConsumo(double potencia, int quantidade, double horasPorDia)
{
    double consumo = (potencia * quantidade * horasPorDia * 30) / 1000;

    return consumo;
}

void consumo()
{
    double potencia;
    int quantidade;
    double horasPorDia;

    cout << "Digite a potencia: ";
    cin >> potencia;

    cout << "Digite a quantidade: ";
    cin >> quantidade;

    cout << "Digite as horas por dia: ";
    cin >> horasPorDia;

    double resultado = calcularConsumo(potencia, quantidade, horasPorDia);

    cout << "Consumo: " << resultado << " kWh" << endl;
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