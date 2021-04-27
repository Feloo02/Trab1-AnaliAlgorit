#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{

    int n=45; // n definira la dimension de ambas matrices cuadradas ( un n mayor a 415 crashea el programa)

    int matriz1[n][n];
    int matriz2[n][n];
    int matrizR[n][n];

    matriz1[n][n];
    matriz2[n][n];
    matrizR[n][n];

    cout << "\nLas matrices tendran ingresados numeros aleatorios del 1 al 100" << endl;

    srand(time(NULL)); // variable de tiempo para que los numeros sean realmente aleatorios

    // Se rellena la matriz 1
    for(int i=0; i<n; i++){
        for(int j=0 ;j<n; j++){
            int x=1+rand()%(11-1);
            matriz1[i][j] = x;
        }
    }

    // Se rellena la matriz 2
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int y=1+rand()%(11-1);
            matriz2[i][j] = y;
        }
    }

    cout << "Ahora se mostraran las matrices\n" << endl;

    cout << "Matriz 1\n" << endl; // Muestra la matriz 1
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matriz1[i][j]<<" ";
        }
        cout<<" "<<endl;
    }

    cout << "\nMatriz 2\n" << endl; // Muestra la matriz 2
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++){
            cout<<matriz2[i][j]<<" ";
        }
        cout<<" "<<endl;
    }

    cout << "Ahora se realizara la multiplicacion de matrices\n" << endl; // multiplica la matriz 1 con la matriz 2

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int z=0; z<n; z++){
                matrizR[i][j]+= matriz1[i][z]*matriz2[z][j];
            }
        }
    }

    cout << "\nMatriz Resultante\n" << endl; // Muestra la matriz Resultante
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++){
            cout<<matrizR[i][j]<<" ";
        }
        cout << " " << endl;
    }

    cout << "\nFinalizo la multiplicacion" << endl;
    return 0;
}
