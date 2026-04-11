/*Insertion Sort: Es como ordenar un maso de cartas: Tomas una carta,
la comparas con las anteriores, y la insertas donde corresponde */
#include<iostream>
using namespace std;

// Versión iterativa
void InsertionSort(int arr[], int n){
    for(int i=1; i<n; i++){// El primer elemento ya se considera ordenado
        int key=arr[i];// Valor actual que queremos ubicar correctamente
        int j=i-1;// Elemento anterior (parte ya ordenada)

        while(j>=0 && arr[j]>key){// Mientras: No salgamos del arreglo, y el elemento anterior sea mayor al elemento actual
            arr[j+1]=arr[j];// Desplazamos el elemento una posición a la derecha
            j--;// Seguimos comparando la clave con los elemtos a la izquierda
        }
        arr[j+1]=key;// Insertamos la calve en su posición correcta
    }
}

// Versión recursiva
void InsertionSort_Rec(int arr[], int n){
    if(n<=1) return;//Caso base: Si el arreglo tiene 0 o 1 elemnto ya está ordenado
    InsertionSort_Rec(arr,n-1);// Ordenamos los n-1 elementos

    int ultimo=arr[n-1];// Guardamos el último elemento
    int j=n-2;// Empezamos a comparar desde la izquierda

    //Desplazamos a la derecha todos los mayores que último
    while(j>=0 && arr[j]>ultimo){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=ultimo;//Colocamos el último elemento en su posición correcta
}
// Resumen en una frase: Ordenas recursivamente todo menos el último, y luego insertas ese último en su posición correcta.

int main(){
    return 0;
}