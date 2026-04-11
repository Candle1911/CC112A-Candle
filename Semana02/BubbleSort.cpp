/*Recorre el arreglo comparando pares
adyacentes. Si están en orden incorrecto,
los intercambia. Al final de cada pasada, el
mayor elemento “flota” hasta su posición
final (como una burbuja).*/
#include<iostream>
using namespace std;

// Versión Iterativa
void BubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){// En cada pasada k, los últimos k elementos ya está ordenados
        bool exchange=false;
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                exchange=true;
            }
        }
        if(!exchange) break;// Optimización
        // Si en una pasada no hay ningún intercambio, el areglo ya está ordenado -> terminar anticipadamente
    }
}

// Versión recursiva
void BubbleSort_Rec(int arr[], int n){
    if(n<=1) return; // base
    for(int j=0; j<n-1; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    BubbleSort_Rec(arr, n-1);// Caso Recursivo
}

int main(){
    return 0;
}