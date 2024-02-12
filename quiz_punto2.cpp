// EJERCICIO 2: Crear un vector de n posiciones de n cantidad de minas simulando el juego de buscaminas, debe mostrar cuantas minas hay. 
#include <iostream>
using namespace std; 

int main(){
//Entradas 
int cantm; 
cout << "Ingrese los numeros que desee"; 
cin >> cantm; 
int minas[cantm];

for (int i = 0; i <(cantm); i++)
{
    cout << "Ingrese la posicion" << i; 
    cin >> minas[i]; 
    break;
}
for (int i = 0; i <(cantm); i++)
{
    cout << "La cantidad de minas que hay son: " << minas[i];
}

return 0;
}
