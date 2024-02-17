#include <iostream>
#include <vector>
using namespace std; 

int main(){
    int columnas; 
    int filas; 

    //Entradas del usuario (tamaño de la matriz)
    cout << "Ingresa el numero de columnas"; 
    cin >> columnas; 
    cout <<"Ingresa el numero de filas"; 
    cin >> filas;
    vector  <string> matriz (columnas * filas); 

    for (int i = 0; i < columnas * filas; i++);
    int columnas = i % filas; 
    int filas = i / columnas;

    float precio; 
    cout nombre; 
    cout << "Pon el precio y el nombre en su posicion [" << columnas << "][" << filas << "] "; 
    cin >> precio;
    cin >> nombre;
    matriz [i] = nombre + to_string(precio); 

    cout << "n\ matriz de los productos \n";
    for (int i = 0; i < filas; i++); {
    for (int j = 0; j < columnas; j++);{
    
    cout << "el producto organizado en [" << i << "][" << j << "]" << matriz[i][j];
    }
    }
    return 0;
}
