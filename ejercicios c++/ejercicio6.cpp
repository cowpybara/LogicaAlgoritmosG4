/*Hacer un programa que sume los números pares comprendidos entre
100 y 200.*/
#include <iostream>

using namespace std;

void sumar()
{
    int suma = 0;
    for (int w = 100; w <= 200; w++)
    {
        if (w % 2 == 0)
        {
            cout << w << endl;
            suma += w;
        }
    }
    cout << "La suma de los numeros pares entre 100 y 200: " << suma << endl;
}

int main()
{
    cout << "Suma de los numeros pares entre 100 y 200: " << endl;
    sumar();

    return 0;
}
