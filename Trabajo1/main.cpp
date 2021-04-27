#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
    int matriz1[100][100];
    int matriz2[100][100];
    int matrizR[100][100];

    int n=4; // n definira la dimension de ambas matrices cuadradas

    matriz1[n][n];
    matriz2[n][n];
    matrizR[n][n];

    cout << "\nLas matrices tendran ingresados numeros aleatorios del 1 al 100" << endl;

    srand(time(NULL));

    // Se rellena la matriz 1
    for(int i=0; i<n; i++){
        for(int j=0 ;j<n; j++){
            int x=1+rand()%(101-1);
            matriz1[i][j] = x;
        }
    }

    // Se rellena la matriz 2
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int y=1+rand()%(101-1);
            matriz2[i][j] = y;
        }
    }

    cout << "Ahora se mostraran las matrices\n" << endl;

    cout << "Matriz 1\n" << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matriz1[i][j]<<" ";
        }
        cout<<" "<<endl;
    }

    cout << "\nMatriz 2\n" << endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++){
            cout<<matriz2[i][j]<<" ";
        }
        cout<<" "<<endl;
    }

    cout << "Ahora se realizara la multiplicacion de matrices\n" << endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int z=0; z<n; z++){
                matrizR[i][j]+= matriz1[i][z]*matriz2[z][j];
            }
        }
    }

    cout << "\nMatriz Resultante\n" << endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++){
            cout<<matrizR[i][j]<<" ";
        }
        cout << " " << endl;
    }

    cout << "\nbye" << endl;
    return 0;
}
