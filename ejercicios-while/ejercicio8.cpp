/*Crea un programa que permita al usuario ingresar dos vectores de la
misma longitud y luego calcule su producto punto. Muestra el resultado
al finalizar el cálculo.*/

#include <iostream>
using namespace std;
#define MAX 2
int vector1[MAX];
int vector2[MAX];

void ingresar()
{
    int w = 0;
    int num1, num2;
    while (w < MAX)
    {
        cout << "Ingresar numero " << w + 1 << " a vector 1: ";
        cin >> num1;
        vector1[w] = num1;
        cout << "Ingresar numero " << w + 1 << " a vector 2: ";
        cin >> num2;
        vector2[w] = num2;
        w++;
    }
}

void producto()
{
    int productopunto = 0;
    int w = 0;
    while (w < MAX)
    {
        productopunto += vector1[w] * vector2[w];
        w++;
    }
    cout << "El producto punto de los dos vectores es: " << productopunto << endl;
}

int main()
{
    int opcion;
    cout << "1. Ingresar numeros a vectores" << endl;
    cout << "2. Calcular producto punto de los vectores" << endl;
    cout << "3. Salir" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        ingresar();
        break;
    case 2:
        producto();
        break;
    case 3:
        break;
    default:
        cout << "Opcion invalida..." << endl;
        break;
    }

    if (opcion!= 3)
    {
        main();
    }
}