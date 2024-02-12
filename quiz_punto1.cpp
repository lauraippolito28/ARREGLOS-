//EJERCICIO 1: Crear dos vectores de n cantidad de numeros que el usuario diligencie, sumar los numeros en cada vector y comparar los resultaods, si son iguales o diferentes
#include <iostream>
using namespace std; 

int main(){
//Entradas 
int cantn_1 = 0; 
cout << "Ingrese los numeros que desee"; 
cin >> cantn_1; 
int numeros_1[cantn_1]; 

for (int i = 0; i <(cantn_1); i++)
{
    cout << "Ingrese la posicion" << i; 
    cin >> numeros_1[i];
    break;

}
for (int i = 0; i <(cantn_1); i++)
{
    cout << "La cantidad de numeros que hay en el primer vector son: " << numeros_1[i];
}
int cantn_2 = 0; 
cout << "Ingrese los numeros que desee"; 
cin >> cantn_2; 
int numeros_2[cantn_2]; 

for (int i = 0; i <(cantn_2); i++)
{
    cout << "Ingrese la posicion: " << i;
    cin >> numeros_2[i];
    break;

}
for (int i = 0; i <(cantn_2); i++)
{
    cout << "La cantidad de numeros que hay en el segundo vector son: " << numeros_2[i];
}
return 0; 
}
