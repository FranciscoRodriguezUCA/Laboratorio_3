#include <iostream>
using namespace std;

int main(void)
{
    cout << "CALCULADORA EN C++" << endl << endl;
    double num1, num2;
    char operacion;
    string usuario;

    while(usuario != "0000")
    {
        cout << "Ingrese su usuario: ";
        cin >> usuario;
        if(usuario == "0000")
            break;

        cout << "Hola, " << usuario << ". CALCULADORA." << endl << endl;

        cout << "Ingrese el primer numero: ";
        cin >> num1;
        cout << "Ingrese el segundo numero: ";
        cin >> num2;

        cout << "Ingrese la operacion (1 = Sumar, 2 = Restar, 3 = Multiplicar, 4 = Dividir, 5 = Salir): ";
        cin >> operacion;

        if(operacion == '1')
            cout << "Resultado: " << num1 + num2 << endl;
        else if(operacion == '2')
            cout << "Resultado: " << num1 - num2 << endl;
        else if(operacion == '3')
            cout << "Resultado: " << num1 * num2 << endl;
        else if(operacion == '4')
        {
            if(num2 != 0)
                cout << "Resultado: " << num1 / num2 << endl;
            else
                cout << "No es posible dividir entre cero" << endl;
        }
        else
            cout << "Saliste de la calculadora." << endl;

        cout << endl;
    }

    return 0;
}