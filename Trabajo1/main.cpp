#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
    int n;
    int matriz1[1][1];
    int matriz2[1][1];
    int matrizR[1][1];

    cout << "Inicio" << endl;
    cout << "Ingrese tamaño de las matrices" << endl;
    cin >> n;
    matriz1[n][n];
    matriz2[n][n];
    int n2=n*n;

    cout << "Las matrices tendran ingresados numeros aleatorios del 1 al 100" << endl;

    // Se rellena la matriz 1
    for(int i=0; i<n; i++){
        for(int j=0 ;j<n; j++){
            //int x=1+rand()%(101-1);
            matriz1[i][j] = 1;
        }
    }

    // Se rellena la matriz 2
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            //int y=1+rand()%(101-1);
            matriz2[i][j] = 2;
        }
    }

    cout << "Ahora se mostraran las matrices" << endl;

    cout << "Matriz 1" << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "[" <<matriz1[i][j] << "]" << "";
        }
        cout << "" << endl;
    }

    cout << "Matriz 2" << endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++){
            cout << "[" <<matriz2[i][j] << "]" << "";
        }
        cout << "" << endl;
    }

    cout << "Ahora se realizara la multiplicacion de matrices" << endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int z=0; z<n; z++){
                matrizR[i][j]+= matriz1[i][z]+matriz2[z][j];
            }
        }
    }

    cout << "Matriz Resultante" << endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++){
            cout << "[" <<matrizR[i][j] << "]" << "";
        }
        cout << "" << endl;
    }

    cout << "bye" << endl;
    return 0;
}
