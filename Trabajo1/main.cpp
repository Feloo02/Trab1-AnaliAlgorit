#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

void multimatri(int a[][], int b[][], int c[][], int n)
{
    int i,j;
    for(i=0,i<n,i++)
    {
        for(j=0,j<n,j++)
        {
            //falta el procedimiento de multiplicacion
        }
    }
}

void llenar(int a[][])
{
    int i,j,x;
    for(i=0,i<n,i++)
    {
        for(j=0,j<n,j++)
        {
            x=1+rand()%(101-1);
            a[i][j] = x;
        }
    }
}

void mostrar(int a[][])
{
    int i,j;
    for(i=0,i<n,i++)
    {
        for(j=0,j<n,j++)
        {
            cout << a[i][j] << "";
        }
        cout << "" << endl;
    }
}

int main()
{
    cout << "Inicio" << endl;
    int n;
    cout << "Ingrese tamaño de las matrices" << endl;
    cout << "Las matrices tendran ingresados numeros aleatorios del 1 al 100" << endl;
    cin >> n;
    int matriz1[n][n];
    int matriz2[n][n];
    llenar(matriz1);
    llenar(matriz2);
    cout << "Ahora se mostraran las matrices" << endl;
    mostrar(matriz1);
    mostrar(matriz2);
    cout << "Ahora se realizara la multiplicacion de matrices" << endl;
    int matriz3[n][n];
    multimatri(matriz1,matriz2,matriz3);
    mostrar(matriz3);
    cout << "bye" << endl;
    return 0;
}
